#include <stdio.h>

int main(void) {
  int qntCases, currNum;
  int fastestSpeed;

  while (scanf("%d", &qntCases) != EOF) {
    for (int i = 0; i < qntCases; i++) {
      scanf("%d", &currNum);
      if (i == 0 || currNum > fastestSpeed) {
        fastestSpeed = currNum;
      }
    }
    if (fastestSpeed < 10) {
      printf("1\n");
    }
    else if (fastestSpeed < 20) {
      printf("2\n");
    }
    else {
      printf("3\n");
    }
  }

  return 0;
}
