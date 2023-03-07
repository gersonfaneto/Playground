#include <stdio.h>

int main(){

  int quantOper, firstNum = 1, secondNum = 2, thirdNum = 3;

  scanf("%d", &quantOper);

  for (int i = 1; i <= quantOper; i++) {
    printf("%d %d %d PUM\n", firstNum, secondNum, thirdNum);
    firstNum += 4;
    secondNum += 4;
    thirdNum += 4;
  }

  return 0;
}
