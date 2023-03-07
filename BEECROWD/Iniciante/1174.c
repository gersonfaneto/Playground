#include <stdio.h>

int main(void) {
  double allNums[100];
  double currNum = 0;

  for (int i = 0; i < 100; i++) {
    scanf("%lf", &currNum);
    allNums[i] = currNum;
  }

  for (int i = 0; i < 100; i++) {
    if (allNums[i] <= 10) {
      printf("A[%d] = %.1lf\n", i, allNums[i]);
    }
  }

  return 0;
}
