#include <stdio.h>

int main(void) {
  int matrixSize = 0;

  while (scanf("%d", &matrixSize) != EOF) {
    int newMatrix[matrixSize][matrixSize];

    for (int i = 0; i < matrixSize; i++) {
      for (int j = 0; j < matrixSize; j++) {
        if (i == j) {
          newMatrix[i][j] = 2;
        }
        else if (i == (matrixSize - j - 1)) {
          newMatrix[i][j] = 3;
        }
        else {
          newMatrix[i][j] = 0;
        }
      }
    }

    int lowerLimit = matrixSize / 3;
    int upperLimit = matrixSize - lowerLimit;
    for (int i = lowerLimit; i < upperLimit; i++) {
      for (int j = lowerLimit; j < upperLimit; j++) {
        newMatrix[i][j] = 1;
      }
    }

    newMatrix[matrixSize / 2][matrixSize / 2] = 4;

    for (int i = 0; i < matrixSize; i++) {
      for (int j = 0; j < matrixSize; j++) {
        printf("%d", newMatrix[i][j]);
      }
      printf("\n");
    }
    printf("\n");

  }

  return 0;
}
