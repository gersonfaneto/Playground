#include <stdio.h>

int main(){

  float finalResult = 0, anyNum;
  int nCols = 12, nRows = 12, qntNums = 30;
  char chosenOper;

  scanf("%c", &chosenOper);

  for (int i = 0; i < nRows; i++) {
    for (int j = 0; j < nCols; j++) {
      scanf("%f", &anyNum);
      if (j == 7 && (i == 5 || i == 6)) {
        finalResult += anyNum;
      } else if (j == 8 && (i >= 4 && i <= 7)) {
        finalResult += anyNum;
      } else if (j == 9 && (i >= 3 && i <= 8)) {
        finalResult += anyNum;
      } else if (j == 10 && (i >= 2 && i <= 9)) {
        finalResult += anyNum;
      } else if (j == 11 && (i >= 1 && i <= 10)) {
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
