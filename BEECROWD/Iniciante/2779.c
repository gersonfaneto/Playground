#include <stdio.h>

int main(void) {
  int qRemaining = 0, qBought = 0, qLeft = 0;

  scanf("%d\n%d", &qRemaining, &qBought);
  int alreadyHave[qRemaining], currNum = 0;

  for (int i = 0; i < qRemaining; i++) {
    alreadyHave[i] = i + 1;
  }

  for (int i = 0; i < qBought; i++) {
    scanf("%d", &currNum);
    alreadyHave[currNum - 1] = -1;
  }

  for (int i = 0; i < qRemaining; i++) {
    if (alreadyHave[i] != -1) {
      qLeft++;
    }
  }

  printf("%d\n", qLeft);

  return 0;
}
