#include <stdio.h>

int main(void) {
  double tNum = 0;
  double allNums[100];

  scanf("%lf", &tNum);
  allNums[0] = tNum;
  printf("N[0] = %.4lf\n", tNum);

  for (int i = 1; i < 100; i++) {
    allNums[i] = (allNums[i - 1] / 2);
    printf("N[%d] = %.4lf\n", i, allNums[i]);
  }
  
  return 0;
}
