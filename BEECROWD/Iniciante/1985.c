#include <stdio.h>

int main() {

  float finalResult;
  int qntOper, qntItems, itemId;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%d %d", &itemId, &qntItems);
    switch (itemId) {
    case 1001:
      finalResult += (1.50 * qntItems);
      break;
    case 1002:
      finalResult += (2.50 * qntItems);
      break;
    case 1003:
      finalResult += (3.50 * qntItems);
      break;
    case 1004:
      finalResult += (4.50 * qntItems);
      break;
    default:
      finalResult += (5.50 * qntItems);
      break;
    }
  }

  printf("%.2f\n", finalResult);

  return 0;
}
