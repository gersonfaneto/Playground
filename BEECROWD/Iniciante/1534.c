#include <stdio.h>

int main(void) {
  int currSize = 0;

  while (scanf("%d", &currSize) != EOF) {
    int Matrix[currSize][currSize];

    for (int i = 0; i < currSize; i++) {
      for (int j = 0; j < currSize; j++) {
        if ((i + j) == (currSize - 1)) {
          Matrix[i][j] = 2;
        }
        else if (i == j) {
          Matrix[i][j] = 1;
        }
        else {
          Matrix[i][j] = 3;
        }
      }
    }

    for (int i = 0; i < currSize; i++) {
      for (int j = 0; j < currSize; j++) {
        (j == (currSize - 1)) ? printf("%d\n", Matrix[i][j]) : printf("%d", Matrix[i][j]);
      }
    }
  }

  return 0;
}
