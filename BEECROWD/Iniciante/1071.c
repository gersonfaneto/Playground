#include <stdio.h>

int main(void) {
  int limitBottom = 0, limitUpper = 0;
  int oddSum = 0;

  scanf("%d%d", &limitBottom, &limitUpper);

  if (limitBottom <= limitUpper) {
    for (int i = limitBottom + 1; i < limitUpper; i++) {
      if (i % 2 != 0) {
        oddSum += i;
      }
    }
  }
  else {
    for (int i = limitUpper + 1; i < limitBottom; i++) {
      if (i % 2 != 0) {
        oddSum += i;
      }
    }
  }

  printf("%d\n", oddSum);

  return 0;
}
