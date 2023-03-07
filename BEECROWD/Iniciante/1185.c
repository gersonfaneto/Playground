#include <stdio.h>

int main(void) {
  int qntSquares = 0, maxRange = 11;
  char operType;
  float Matrix[12][12], finalResult = 0, currNum = 0;

  scanf("%c", &operType);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%f", &currNum);
      Matrix[i][j] = currNum;
      if (j < maxRange) {
        finalResult += Matrix[i][j];
        qntSquares++;
      }
    }
    maxRange--;
  }

  if (operType == 'S') {
    printf("%.1f\n", finalResult);
  }
  else {
    printf("%.1f\n", finalResult / qntSquares);
  }

  return 0;
}
