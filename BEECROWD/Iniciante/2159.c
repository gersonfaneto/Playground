#include <stdio.h>
#include <math.h>

int main(void) {
  long int tNum = 0;
  double minValue = 0, maxValue = 0;

  scanf("%d", &tNum);

  minValue = tNum / log(tNum);
  maxValue = 1.25506 * (minValue);

  printf("%.1lf %.1lf\n", minValue, maxValue);

  return 0;
}
