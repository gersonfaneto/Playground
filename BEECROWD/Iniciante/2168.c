#include <stdio.h>

int main(void) {
  int mapSize = 0;

  scanf("%d", &mapSize);
  int newMap[mapSize + 1][mapSize + 1];
  int auxValue = 0;

  for (int i = 0; i < mapSize + 1; i++) {
    for (int j = 0; j < mapSize + 1; j++) {
      scanf("%d", &newMap[i][j]);
    }
  }

  for (int i = 0; i < mapSize; i++) {
    for (int j = 0; j < mapSize; j++) {
      auxValue = 0;
      auxValue += newMap[i][j];
      auxValue += newMap[i + 1][j];
      auxValue += newMap[i][j + 1];
      auxValue += newMap[i + 1][j + 1];
      if (auxValue >= 2) {
        printf("S");
      }
      else {
        printf("U");
      }
    }
    printf("\n");
  }

  return 0;
}
