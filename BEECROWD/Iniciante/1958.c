#include <stdio.h>

int main(void) {
  double currNum = 0;

  scanf("%lf", &currNum);

  printf("%+.4E\n", currNum);

  return 0;
}
