#include <stdio.h>

int main(void) {
  double finalResult = 0;
  int cEven = 1, cOdd = 1;

  while (cOdd != 39) {
    finalResult += (cOdd / (float) cEven);
    cOdd += 2;
    cEven *= 2;
  }

  printf("%.2f\n", finalResult);

  return 0;
}
