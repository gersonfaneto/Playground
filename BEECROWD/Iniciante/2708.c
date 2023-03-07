#include <stdio.h>
#include <string.h>

int main(void) {
  int totalTur = 0, currTur = 0, totalJep = 0;
  char jMove[25];

  while (strcmp(jMove, "ABEND") != 0) {
    scanf("%s", jMove);

    if (strcmp(jMove, "ABEND") != 0) {
      scanf(" %d%*c", &currTur);

      if (strcmp(jMove, "SALIDA") == 0) {
        totalTur += currTur;
        totalJep++;
      }
      else {
        totalTur -= currTur;
        totalJep--;
      }
    }
  }

  printf("%d\n%d\n", totalTur, totalJep);

  return 0;
}
