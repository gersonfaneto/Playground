#include <stdio.h>

int main(void) {
  int qntOper = 0, currYear = 0;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%d", &currYear);
    if (currYear < 2015) {
      printf("%d D.C.\n", 2015 - currYear);
    }
    else {
      printf("%d A.C.\n", (currYear - 2015) + 1);
    }
  }

  return 0;
}
