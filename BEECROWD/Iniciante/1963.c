#include <stdio.h>

int main(void) {
  double oldPrice = 0, newPrice = 0, finalResult = 0;

  scanf("%lf %lf", &oldPrice, &newPrice);

  finalResult = ((newPrice - oldPrice) / oldPrice) * 100;

  printf("%.2f%%\n", finalResult);

  return 0;
}
