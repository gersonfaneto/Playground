#include <stdio.h>

int main(void) {
  int qntNums = 0, newNum = 0;

  scanf("%d", &qntNums);

  for (int i = 0; i < qntNums; i++) {
    scanf("%d", &newNum);
    if (newNum == 0) {
      printf("NULL\n");
    }
    else if (newNum % 2 == 0) {
      (newNum > 0) ? printf("EVEN POSITIVE\n") : printf("EVEN NEGATIVE\n");
    }
    else {
      (newNum > 0) ? printf("ODD POSITIVE\n") : printf("ODD NEGATIVE\n");
    }
  }

  return 0;
}
