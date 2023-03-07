#include<stdio.h>

int main(void) {
    double finalResult = 0.0;
    int currNum = 0;

    scanf("%d", &currNum);

    if (currNum == 1) {
      finalResult = 0.1666666667;
    }
    if (currNum == 0) {
      finalResult = 0.0000000000;
    }

    for (int i = 2; i <= currNum; i++) {
        if (i == 2) {
          finalResult = 6.0 + (1.00 / 6.00);
          finalResult = 1.0 / finalResult;
        }
        else {
          finalResult = 6.00 + finalResult;
          finalResult = 1.0 / finalResult;
        }
    }

    finalResult += 3.00;
    printf("%.10lf\n", finalResult);

    return 0;
}
