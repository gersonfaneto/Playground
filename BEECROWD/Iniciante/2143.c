#include <stdio.h>

int main(void) {
  int qntCases = 0, currNum = 0;

  do {
    scanf("%d", &qntCases);

    for (int i = 0; i < qntCases; i++) {
      scanf("%d", &currNum);
      if (currNum % 2 != 0) {
        printf("%d\n", (currNum * 2) - 1);
      }
      else {
        printf("%d\n", (currNum * 2) - 2);
      }
    }

  } while (qntCases > 0);

  return 0;
}
