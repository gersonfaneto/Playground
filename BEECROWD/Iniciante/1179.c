#include <stdio.h>

void DisplayArray(int*, int, char*);

int main(void) {
  int allOdds[5], allEvens[5];
  int currNum = 0, oddIndex = 0, evenIndex = 0;

  for (int i = 0; i < 15; i++) {
    scanf("%d", &currNum);
    if (currNum % 2 == 0) {
      allEvens[evenIndex++] = currNum;
    }
    else {
      allOdds[oddIndex++] = currNum;
    }

    if (oddIndex == 5) {
      DisplayArray(allOdds, oddIndex, "impar");
      oddIndex = 0;
    }
    if (evenIndex == 5) {
      DisplayArray(allEvens, evenIndex, "par");
      evenIndex = 0;
    }
  }

  DisplayArray(allOdds, oddIndex, "impar");
  DisplayArray(allEvens, evenIndex, "par");

  return 0;
}

void DisplayArray(int* tArr, int tSize, char* arrType) {
  for (int i = 0; i < tSize; i++) {
    printf("%s[%d] = %d\n", arrType, i, tArr[i]);
  }
}
