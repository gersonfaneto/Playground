#include <stdio.h>

int main(void) {
  long unsigned int firstSide = 0, secondSize = 0;

  scanf("%lu %lu", &firstSide, &secondSize);

  printf("%lu\n", firstSide * secondSize);

  return 0;
}
