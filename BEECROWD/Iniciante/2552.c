#include <stdio.h>

int main(void) {
  int nLines = 0, nColumns = 0;

  while (scanf("%d %d", &nLines, &nColumns) != EOF) {
    int newMap[nLines][nColumns];

    for (int i = 0; i < nLines; i++) {
      for (int j = 0; j < nColumns; j++) {
        scanf("%d", &newMap[i][j]);  
        if (newMap[i][j] == 1) {
          newMap[i][j] = 9;
        }
      }
    }

    for (int i = 0; i < nLines; i++) {
      for (int j = 0; j < nColumns; j++) {
        if (newMap[i][j] == 9) {
          if (i - 1 >= 0 && newMap[i - 1][j] < 4) {
            newMap[i - 1][j]++;
          }
          if (j + 1 < nColumns && newMap[i][j + 1] < 4) {
            newMap[i][j + 1]++;
          }
          if (i + 1 < nLines && newMap[i + 1][j] < 4) {
            newMap[i + 1][j]++;
          }
          if (j - 1 >= 0 && newMap[i][j - 1] < 4) {
            newMap[i][j - 1]++;
          }
        }
      }
    }

    for (int i = 0; i < nLines; i++) {
      for (int j = 0; j < nColumns; j++) {
        (j == nColumns  - 1) ? printf("%d\n", newMap[i][j]) : printf("%d", newMap[i][j]);
      }
    }
  }

  return 0;
}
