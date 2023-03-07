#include <stdio.h>

int main(void) {
  int productId = 0, qntProd = 0;
  float unPrice = 0, totalPrice = 0;

  for (int i = 0; i < 2; i++) {
    scanf("%d%d%f", &productId, &qntProd, &unPrice);
    totalPrice += qntProd * unPrice;
  }

  printf("VALOR A PAGAR: R$ %.2f\n", totalPrice);

  return 0;
}
