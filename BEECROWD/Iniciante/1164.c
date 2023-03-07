#include <stdio.h>

int main(void) {
  int inNum = 0, divSum = 0;
  int qntCases = 0;

  scanf("%d", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    scanf("%d", &inNum);
    for (int j = 1; j < inNum; j++) {
      if (inNum % j == 0) {
        divSum += j;
      }
    }
    (divSum == inNum) ? printf("%d eh perfeito\n", inNum) :
      printf("%d nao eh perfeito\n", inNum);
    divSum = 0;
  }

  return 0;
}
