#include <stdio.h>

int main(){

  int quantOper, firstNum = 1, secondNum = 1, thirdNum = 1;

  scanf("%d", &quantOper);

  for (int i = 1; i <= quantOper; i++) {
    printf("%d %d %d\n", firstNum, secondNum, thirdNum);

    firstNum ++;
    secondNum = firstNum * firstNum;
    thirdNum = secondNum * firstNum;
  }

  return 0;
}
