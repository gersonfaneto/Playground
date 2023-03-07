#include <stdio.h>

int main(void) {
  int qntPos = 0, qntNeg = 0, qntOdd = 0, qntEven = 0;
  int currNum = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &currNum);
    if (currNum > 0) {
      qntPos++;
    }
    else if (currNum < 0) {
      qntNeg++;
    }

    if (currNum % 2 == 0) {
      qntEven++;
    }
    else {
      qntOdd++;
    }
  }

  printf("%d valor(es) par(es)\n", qntEven);
  printf("%d valor(es) impar(es)\n", qntOdd);
  printf("%d valor(es) positivo(s)\n", qntPos);
  printf("%d valor(es) negativo(s)\n", qntNeg);


  return 0;
}
