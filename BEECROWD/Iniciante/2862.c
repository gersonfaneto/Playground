#include <stdio.h>

int main(void) {
  int qIter = 0, currPower = 0;

  scanf("%d", &qIter);

  for (int i = 0; i < qIter; i++) {
    scanf("%d", &currPower);
    if (currPower <= 8000) {
      printf("Inseto!\n");
    }
    else {
      printf("Mais de 8000!\n"); 
    }
  }

  return 0;
}
