#include <stdio.h>

int main(void) {
  int columnNumber = 0;
  char operType;
  float Matrix[12][12], finalResult = 0, currNum = 0;

  scanf("%d%*c", &columnNumber);
  scanf("%c", &operType);

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      scanf("%f", &currNum);
      Matrix[i][j] = currNum;
      if (j == columnNumber) {
        finalResult += Matrix[i][j];
      }
    }
  }

  if (operType == 'S') {
    printf("%.1f\n", finalResult);
  }
  else {
    printf("%.1f\n", finalResult / 12);
  }

  return 0;
}
