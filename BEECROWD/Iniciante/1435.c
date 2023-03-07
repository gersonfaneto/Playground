#include <stdio.h>

int main(void) {
  int currNum, lowerLimit, upperLimit;
  int currValue;

  do {
    scanf("%d", &currNum);
    int Matrix[currNum][currNum];

    lowerLimit = 0;
    upperLimit = currNum;
    currValue = 1;

    do {
			for (int i = lowerLimit; i < upperLimit; i++) {
				for (int j = lowerLimit; j < upperLimit; j++) {
            Matrix[i][j] = currValue;
        }
      }
      if (upperLimit != 0) {
        upperLimit--;
        lowerLimit++;
        currValue++;
      }
    } while (upperLimit != 0);

    for (int i = 0; i < currNum; i++) {
      for (int j = 0; j < currNum; j++) {
        if (j == 0) {
          (j == (currNum - 1)) ? printf("%3d\n", Matrix[i][j]) : printf("%3d", Matrix[i][j]);
        }
        else {
          (j == (currNum - 1)) ? printf("%4d\n", Matrix[i][j]) : printf("%4d", Matrix[i][j]);
        }
      }
    }

    if (currNum > 0) {
      printf("\n");
    }
  } while (currNum > 0);

  return 0;
}

