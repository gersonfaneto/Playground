#include <stdio.h>

int main(void) {
  int tDist = 0, fDiam = 0, sDiam = 0;
  float ICM = 0;

  scanf("%d %d %d", &tDist, &fDiam, &sDiam);

  ICM = tDist / (float) (fDiam + sDiam);

  printf("%.2f\n", ICM);

  return 0; 
}
