#include <stdio.h>

int main(void) {
  int qntOper = 0, lastDown = 0;

  scanf("%d", &qntOper);
  int allValues[qntOper];

  for (int i = 0; i < qntOper; i++) {
    scanf("%d", &allValues[i]);
  }

  for (int i = 0; i < qntOper - 1; i++) {
    if (allValues[i] > allValues[i + 1]) {
      lastDown = i + 2;
      break;
    }
  }

  printf("%d\n", lastDown);

  return 0;
}
