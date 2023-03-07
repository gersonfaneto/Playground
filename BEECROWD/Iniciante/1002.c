#include <stdio.h>

int main(void) {

  double circleArea = 0, circleRadius = 0;

  scanf("%lf", &circleRadius);

  circleArea = (circleRadius * circleRadius) * 3.14159;

  printf("A=%.4lf\n", circleArea);

  return 0;
}
