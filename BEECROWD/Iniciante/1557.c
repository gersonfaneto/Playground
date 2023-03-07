#include <stdio.h>

int Power(int, int);

int main(void) {
  int currNum;
  
  scanf("%d", &currNum);

  while (currNum > 0) {
    int maxNumber = Power(2, (currNum * 2 - 2));
    int justSpace = 0, toPrint = 1;

    while (maxNumber > 0) {
      maxNumber /= 10;
      justSpace++;
    }

    for (int i = 0; i < currNum; i++) {
      for (int j = 0; j < currNum; j++) {
        (j == currNum - 1) ? printf("%*d\n", justSpace, toPrint) : printf("%*d ", justSpace, toPrint);
        toPrint *= 2;
      }
      toPrint = Power(2, i + 1);
    }
    printf("\n");
    scanf("%d", &currNum);
  }

  return 0;
}

int Power(int tNum, int tPower) {
  int finalResult = 1;

  for (int i = 0; i < tPower; i++) {
    finalResult *= tNum;
  }

  return finalResult;
}
