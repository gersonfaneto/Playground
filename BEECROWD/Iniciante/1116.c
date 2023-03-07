#include <stdio.h>

int main(){

  int quantOper;
  float firstNum, secondNum, finalResult;

  scanf("%d", &quantOper);

  for (int i = 1; i <= quantOper; i++) {
    scanf("%f %f", &firstNum, &secondNum);
    if (secondNum == 0) {
      printf("divisao impossivel\n");
    } else {
      finalResult = firstNum / (float) secondNum;
      printf("%.1f\n", finalResult);
    }
  }

  return 0;
}
