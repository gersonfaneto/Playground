#include <stdio.h>

int main(){

  float finalResult = 0, anyNum;
  int nCols = 12, nRows = 12, qntNums = 30;
  char chosenOper;

  scanf("%c", &chosenOper);

  for (int i = 0; i < nRows; i++) {
    for (int j = 0; j < nCols; j++) {
      scanf("%f", &anyNum);
      if (i == 7 && (j == 5 || j == 6)) {
        finalResult += anyNum;
      } else if (i == 8 && (j >= 4 && j <= 7)) {
        finalResult += anyNum;
      } else if (i == 9 && (j >= 3 && j <= 8)) {
        finalResult += anyNum;
      } else if (i == 10 && (j >= 2 && j <= 9)) {
        finalResult += anyNum;
      } else if (i == 11 && (j >= 1 && j <= 10)) {
        finalResult += anyNum;
      }
    }
  }

  if (chosenOper == 'S') {
    printf("%.1f\n", finalResult);
  } else {
    printf("%.1f\n", (finalResult / qntNums));
  }

  return 0;
}
