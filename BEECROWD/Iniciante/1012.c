#include <stdio.h>

int main(void) {
  double numberA = 0, numberB = 0, numberC = 0;
  double aTri = 0, aCir = 0, aTra = 0, aQua = 0, aRet = 0;

  scanf("%lf%lf%lf", &numberA, &numberB, &numberC);

  aTri = (numberA * numberC) / (double) 2;
  aTra = ((numberA + numberB) * numberC) / (double) 2;
  aCir = 3.14159 * (numberC * numberC);
  aQua = numberB * numberB;
  aRet = numberA * numberB;

  printf("TRIANGULO: %.3f\n", aTri);
  printf("CIRCULO: %.3f\n", aCir);
  printf("TRAPEZIO: %.3f\n", aTra);
  printf("QUADRADO: %.3f\n", aQua);
  printf("RETANGULO: %.3f\n", aRet);
  
  return 0;
}
