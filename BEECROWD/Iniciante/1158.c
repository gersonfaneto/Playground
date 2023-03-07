#include <stdio.h>

int main(){

  int quantComp, totalImp, firstNum, secondNum;

  scanf("%d", &quantComp);
  for (int i = 1; i <= quantComp; i++) {
    scanf("%d %d", &firstNum, &secondNum);

    if (firstNum < secondNum) {
      for (int i = (firstNum + 1); i < secondNum; i++) {
        if (i % 2 != 0) {
          totalImp += i;
        }
      }
      printf("%d\n", totalImp);
    }
    else if (secondNum < firstNum) {
      for (int i = (secondNum + 1); i < firstNum; i++) {
        if (i & 2 != 0) {
          totalImp += i;
        }
      }
      printf("%d\n", totalImp);
    }
    else {
      printf("%d\n", 0);
    }
    totalImp = 0;
  }

  return 0;
}
