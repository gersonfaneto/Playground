#include <stdio.h>  

int main(void) {
  double esRadius = 0, esVolume = 0;

  scanf("%lf", &esRadius);

  esVolume = (4 / (double) 3) * 3.14159 * (esRadius * esRadius * esRadius);

  printf("VOLUME = %.3f\n", esVolume);

  return 0;
}
