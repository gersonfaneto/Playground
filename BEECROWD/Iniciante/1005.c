#include <stdio.h>

int main(void) {
  double firstN, secondN, aveRes;

  scanf("%lf%lf", &firstN, &secondN);

  aveRes = ((firstN * 3.5) + (secondN * 7.5)) / 11;

  printf("MEDIA = %.5f\n", aveRes);

}
