#include <stdio.h>

int main(void) {
  double sideA = 0, sideB = 0, sideC = 0;

  scanf("%lf %lf %lf", &sideA, &sideB, &sideC);

  if ((sideA < sideB + sideC) && (sideB < sideA + sideC) && (sideC < sideA + sideB)) {
    printf("Perimetro = %.1lf\n", sideA + sideB + sideC);
  }
  else {
    printf("Area = %.1lf\n", ((sideA + sideB) * sideC) / 2);
  }


  return 0;
}
