#include <stdio.h>

int main(void) {
  int firstSide = 0, secondSide = 0;
  int lineNumber = 0, rowNumber = 0;
  int qntSevens = 0;

  scanf("%d %d", &firstSide, &secondSide);
  int newMatrix[firstSide][secondSide];

  for (int i = 0; i < firstSide; i++) {
    for (int j = 0; j < secondSide; j++) {
      scanf("%d", &newMatrix[i][j]);
    }
  }

  for (int i = 0; i < firstSide; i++) {
    for (int j = 0; j < secondSide; j++) {
      if (newMatrix[i][j] == 42) {
        if ((i - 1 >= 0) && (i + 1 < firstSide) && (j - 1 >= 0) && (j + 1 < secondSide)) {
          for (int k = (i - 1); k < (i + 2); k++) {
            for (int l = (j - 1); l < (j + 2); l++) {
              if (newMatrix[k][l] == 7) {
                qntSevens++;
              }
            }
          }
          if (qntSevens == 8) {
            printf("%d %d\n", i + 1, j + 1);
            return 0;
          }
          qntSevens = 0;
        }
      }
    }
  }
  
  printf("0 0\n");

  return 0;
}
