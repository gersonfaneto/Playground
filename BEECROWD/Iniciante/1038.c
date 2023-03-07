#include <stdio.h>

int main(){

  int identItem, quantItem;
  float totalPedido;

  scanf("%d %d", &identItem, &quantItem);

  switch (identItem) {
    case 1:
      totalPedido = (4.0 * quantItem);
      break;
    case 2:
      totalPedido = (4.5 * quantItem);
      break;
    case 3:
      totalPedido = (5.0 * quantItem);
      break;
    case 4:
      totalPedido = (2.0 * quantItem);
      break;
    case 5:
      totalPedido = (1.5 * quantItem);
      break;
  }

  printf("Total: R$ %.2f\n", totalPedido);

  return 0;
}
