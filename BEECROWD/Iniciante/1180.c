#include <stdio.h>

int main(void) {
  int arrSize, currNum, minorValue, minorIndex;

  scanf("%d", &arrSize);
  int allNums[arrSize];

  for (int i = 0; i < arrSize; i++) {
    scanf("%d", &currNum);
    allNums[i] = currNum;

    if (i == 0 || currNum < minorValue) {
      minorValue = currNum;
      minorIndex = i;
    }
  }

  printf("Menor valor: %d\n", minorValue);
  printf("Posicao: %d\n", minorIndex);

  return 0;
}

