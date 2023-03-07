#include <stdio.h>

int main(void) {
  int qntCases = 0, startPoint = 0;

  scanf("%d", &qntCases);
  int allNums[qntCases];

  for (int i = 0; i < qntCases; i++) {
    scanf("%d", &allNums[i]);
    if (i == 1) {
      if (allNums[0] < allNums[1]) {
        startPoint = 1;
      }
      else {
        startPoint = 0;
      }
    }
  }

  for (int i = 0; i < qntCases - 1; i++) {
    if (startPoint == 1) {
      if (i % 2 == 0 && allNums[i] >= allNums[i + 1]) {
        printf("0\n");
        return 0;
      }
      if (i % 2 != 0 && allNums[i] <= allNums[i + 1]) {
        printf("0\n");
        return 0;
      }
    }
    else {
      if (i % 2 == 0 && allNums[i] <= allNums[i + 1]) {
        printf("0\n");
        return 0;
      }
      if (i % 2 != 0 && allNums[i] >= allNums[i + 1]) {
        printf("0\n");
        return 0;
      }
    }
  }

  printf("1\n");

  return 0;
}
