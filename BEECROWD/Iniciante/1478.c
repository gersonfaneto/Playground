#include <stdio.h>

int main(void) {
  int currSize = 0, currValue = 1, revertSeq = 0, wasReverted = 0;

  do {
    scanf("%d", &currSize);
    int Matrix[currSize][currSize];

    for (int i = 0; i < currSize; i++) {
      for (int j = 0; j < currSize; j++) {
        if (i == 0) {
          Matrix[i][j] = j + 1;
          currValue++;
        }
        else {
          if (j == 0 || revertSeq == 1) {
            Matrix[i][j] = ++currValue;
          }
          else {
            Matrix[i][j] = --currValue;
          }
        }
        if (currValue == 1 && wasReverted == 0) {
          revertSeq = 1;
          wasReverted = 1;
        }
      }
      currValue = 1 * (i + 1);
      wasReverted = 0;
      revertSeq = 0;
    }

    for (int i = 0; i < currSize; i++) {
      for (int j = 0; j < currSize; j++) {
        if (j == 0) {
          (j == (currSize - 1)) ? printf("%3d\n", Matrix[i][j]) : printf("%3d", Matrix[i][j]);
        }
        else {
          (j == (currSize - 1)) ? printf("%4d\n", Matrix[i][j]) : printf("%4d", Matrix[i][j]);
        }
      }
    }

    if (currSize > 0) {
      printf("\n");
    }

  } while (currSize > 0);

  return 0;
}
