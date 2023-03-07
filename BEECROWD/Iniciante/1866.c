#include <stdio.h>

int main(void) {
  int qntOper = 0, currNum = 0;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%d", &currNum);
    if (currNum % 2 == 0) {
      printf("0\n");
    }
    else {
      printf("1\n");
    }
  }

  return 0;
}
