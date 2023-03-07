#include <stdio.h>

int main(void) {
  int firstNum, secondNum, upperLimit, lowerLimit;

  scanf("%d %d", &firstNum, &secondNum);

  lowerLimit = (firstNum < secondNum) ? firstNum : secondNum;
  upperLimit = (firstNum > secondNum) ? firstNum : secondNum;

  for (int i = lowerLimit + 1; i < upperLimit; i++) {
    if (i % 5 == 2 || i % 5 == 3) {
      printf("%d\n", i);
    }
  }

  return 0;
}
