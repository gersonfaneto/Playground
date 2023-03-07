#include <stdio.h>

int main(){

  int firstNum, secondNum, counter = 0, finalResult = 0;

  scanf("%d", &firstNum);
  scanf("%d", &secondNum);

  while (secondNum <= firstNum) {
    scanf("%d", &secondNum);
  }

  while (finalResult < secondNum) {
    counter += 1;
    finalResult += (firstNum + 1);
  }

  printf("%d\n", counter);

  return 0;
}
