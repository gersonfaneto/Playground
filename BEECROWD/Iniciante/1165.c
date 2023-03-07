#include <stdio.h>

int main(void) {
  int currNum = 0, qntCases = 0, qntDivisors = 0;

  scanf("%d", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    scanf("%d", &currNum);
    for (int j = 1; j <= currNum; j++) {
      if (currNum % j == 0) {
        qntDivisors++;
      }
    } 
    if (qntDivisors > 2) {
      printf("%d nao eh primo\n", currNum);
    }
    else {
      printf("%d eh primo\n", currNum);
    }
    qntDivisors = 0;
  }



  return 0;
}
