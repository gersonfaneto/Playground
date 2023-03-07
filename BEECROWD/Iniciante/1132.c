#include <stdio.h>

int main(void) {
  int firstNum = 0, secondNum = 0, lowerLimit = 0, upperLimit = 0;
  int finalResult = 0;

  scanf("%d %d", &firstNum, &secondNum);

  lowerLimit = (firstNum < secondNum) ? firstNum : secondNum;
  upperLimit = (firstNum > secondNum) ? firstNum: secondNum;
  
  for (int i = lowerLimit; i <= upperLimit; i++) {
    if (i % 13 != 0) {
      finalResult += i;
    }
  }

  printf("%d\n", finalResult);

  return 0;
}
