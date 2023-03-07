#include <stdio.h>

int main(){

  int firstNum, finalResult = 1;

  scanf("%d", &firstNum);

  for (int i = firstNum; i >= 1; i--) {
    finalResult *= i;
  }

  printf("%d\n", finalResult);

  return 0;
}
