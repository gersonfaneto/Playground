#include <stdio.h>

void BubbleSort(double[], int);

int main(void) {
  double A = 0, B = 0, C = 0;
  double Triangle[3];

  scanf("%lf%lf%lf", &Triangle[0], &Triangle[1], &Triangle[2]);
  BubbleSort(Triangle, 3);

  A = Triangle[0];
  B = Triangle[1];
  C = Triangle[2];

  if (A >= (B + C)) {
    printf("NAO FORMA TRIANGULO\n");
  }
  else {
    if ((A * A) == ((B * B) + (C * C))) {
      printf("TRIANGULO RETANGULO\n");
    }
    else if ((A * A) > ((B * B) + (C * C))) {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    else {
      printf("TRIANGULO ACUTANGULO\n");
    }

    if (A == B && B == C) {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if (A == B && B != C || A == C && C != B || B == C && C != A) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}

void BubbleSort(double toSort[], int arrSize) {
  double auxValue = 0;

  for (int i = 0; i < arrSize; i++) {
    for (int j = 0; j < (arrSize - 1); j++) {
      if (toSort[j] < toSort[j + 1]) {
        auxValue = toSort[j];
        toSort[j] = toSort[j + 1];
        toSort[j + 1] = auxValue;
      }
    }
  }
}
