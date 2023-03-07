#include <stdio.h>

int main(void) {
  int fiHalf = 0, sHalf = 0, tHalf = 0, foHalf = 0;

  scanf("%d.%d.%d-%d", &fiHalf, &sHalf, &tHalf, &foHalf);

  printf("%03d\n%03d\n%03d\n%02d\n", fiHalf, sHalf, tHalf, foHalf);

  return 0;
}
