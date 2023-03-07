#include<stdio.h>

int main(){

  int firstNum, secondNum, finalResult = 0;

  scanf("%d%d", &firstNum, &secondNum);

  while (secondNum <= 0) {
    scanf("%d", &secondNum);
  }

  for (int i = 0; i < secondNum; i++) {
    finalResult += (firstNum + i);
  }

  printf("%d\n", finalResult);

  return 0;
}
