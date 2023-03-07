#include <stdio.h>
#include <math.h>

int main(void) {
  double A = 0, B = 0, C = 0;
  double Delta = 0, FirstRoot = 0, SecondRoot = 0;

  scanf("%lf%lf%lf", &A, &B, &C);

  Delta = (pow(B, 2)) - (4 * A * C);

  if (Delta < 0 || A == 0) {
    printf("Impossivel calcular\n");
  }
  else {
    FirstRoot = ((B * -1) + sqrt(Delta)) / (2 * A);
    SecondRoot = ((B * -1) - sqrt(Delta)) / (2 * A);

    printf("R1 = %.5f\nR2 = %.5f\n", FirstRoot, SecondRoot);
  }

  return 0;
}
