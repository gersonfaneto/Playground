#include <stdio.h>

int main(void) {
  int qntFood = 0, qntPeople = 0;
  float finalResult = 0;

  scanf("%d %d", &qntFood, &qntPeople);

  finalResult = qntFood / (float) qntPeople;

  printf("%.2f\n", finalResult);

  return 0;
}
