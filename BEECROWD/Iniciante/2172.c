#include <stdio.h>

int main(void) {
  int qntBoost = 0;
  long long int mosterXP = 0, finalXP = 0;


  do {
    scanf("%d %lld", &qntBoost, &mosterXP);

    finalXP = qntBoost * mosterXP;

    if (finalXP > 0) {
      printf("%lld\n", finalXP);
    }
  } while (qntBoost != 0 && mosterXP != 0);

  return 0;
}
