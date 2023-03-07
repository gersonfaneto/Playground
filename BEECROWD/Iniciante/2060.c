#include <stdio.h>

int main(){

  int qntNums, anyNum;
  int divTwo = 0, divThree = 0, divFour = 0, divFive = 0;

  scanf("%d", &qntNums);

  for (int i = 0; i < qntNums; i++) {
      scanf("%d", &anyNum);
      if (anyNum % 2 == 0) {
        divTwo++;
      }
      if (anyNum % 3 == 0) {
        divThree++;
      }
      if (anyNum % 4 == 0) {
        divFour++;
      }
      if (anyNum % 5 == 0) {
        divFive++;
      }
  }

  printf("%d Multiplo(s) de 2\n", divTwo);
  printf("%d Multiplo(s) de 3\n", divThree);
  printf("%d Multiplo(s) de 4\n", divFour);
  printf("%d Multiplo(s) de 5\n", divFive);

  return 0;
}
