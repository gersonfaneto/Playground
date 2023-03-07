#include <stdio.h>

int main(void) {
  int qntPeople = 0, minHeight = 0, maxHeight = 0;

  while (scanf("%d %d %d", &qntPeople, &minHeight, &maxHeight) != EOF) {
    int currHeight = 0, totalPeople = 0;

    for (int i = 0; i < qntPeople; i++) {
      scanf("%d", &currHeight);
      if (currHeight >= minHeight && currHeight <= maxHeight) {
        totalPeople++;
      }
    }

    printf("%d\n", totalPeople);
  }

  return 0;
}
