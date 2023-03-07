#include <stdio.h>
#include <math.h>

int main(void) {
  int firstSide = 0, secondSize = 0, porcArea = 0;
  int totalArea = 0;
  double finalResult = 0;

  do {
    scanf("%d", &firstSide);
    if (firstSide > 0) {
      scanf("%d", &secondSize);
      scanf("%d", &porcArea);

      totalArea = firstSide * secondSize;
      finalResult = sqrt((totalArea / (double) porcArea) * 100);

      printf("%d\n", (int) finalResult);
    }
  } while (firstSide > 0);

  return 0;
}
