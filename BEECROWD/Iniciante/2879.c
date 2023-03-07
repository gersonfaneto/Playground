#include <stdio.h>

int main(void) {
  int qIter = 0, currNum = 0, tWins = 0;

  scanf("%d", &qIter);

  for (int i = 0; i < qIter; i++) {
    scanf("%d", &currNum);
    if (currNum != 1) {
      tWins++;
    }
  }

  printf("%d\n", tWins);

  return 0;
}
