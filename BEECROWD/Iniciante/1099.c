#include <stdio.h>

int main(){

  int quantOper, firstNum, secondNum, finalResult = 0;

  scanf("%d", &quantOper);

  for (int i = 1; i <= quantOper; i++) {
    scanf("%d%d", &firstNum, &secondNum);

    if (firstNum % 2 == 0) {
      firstNum++;
    }

    for (int i = 1; i <= secondNum; i++) {
      finalResult += firstNum;
      firstNum += 2;
      }

    printf("%d\n", finalResult);
    finalResult = 0;
  }

  return 0;
}
