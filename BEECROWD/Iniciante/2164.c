#include <stdio.h>
#include <math.h>

int main(void) {
  int tNum = 0;
  double finalResult = 0;

  scanf("%d", &tNum);

  
  finalResult = ((pow(((1 + sqrt(5)) / 2), tNum)) - (pow(((1 - sqrt(5)) / 2), tNum))) / sqrt(5);

  printf("%.1lf\n", finalResult);

  return 0;
}
