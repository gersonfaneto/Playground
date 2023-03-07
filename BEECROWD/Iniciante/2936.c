#include <stdio.h>

int main(void) {
  int tPortion[] = {300, 1500, 600, 1000, 150};
  int qPortions = 0, finalResult = 225; 

  for (int i = 0; i < 5; i++) {
    scanf("%d", &qPortions);
    finalResult += (tPortion[i] * qPortions);
  }

  printf("%d\n", finalResult);

  return 0;
}
