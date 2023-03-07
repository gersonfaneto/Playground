#include <stdio.h>

int main(){

  int firtsNum, secondNum, thirdNum, fourthNum;
  int finalResult;

  scanf("%d", &firtsNum);
  scanf("%d", &secondNum);
  scanf("%d", &thirdNum);
  scanf("%d", &fourthNum);

  finalResult = (firtsNum * secondNum) - (thirdNum * fourthNum);

  printf("DIFERENCA = %d\n", finalResult);

  return 0;
}
