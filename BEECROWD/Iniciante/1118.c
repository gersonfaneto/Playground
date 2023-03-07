#include <stdio.h>

int main(void) {
  float firstScore = 0, secondScore = 0;
  int newOper = 0;

  do {
    do {
      scanf("%f", &firstScore);

      if (firstScore < 0 || firstScore > 10) {
        printf("nota invalida\n");
      }

    } while (firstScore < 0 || firstScore > 10);

    do {
      scanf("%f", &secondScore);

      if (secondScore < 0 || secondScore > 10) {
        printf("nota invalida\n");
      }

    } while (secondScore < 0 || secondScore > 10);

    printf("media = %.2f\n", ((firstScore + secondScore) / 2));

    do {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &newOper);
    } while (newOper != 1 && newOper != 2);

  } while (newOper != 2);

  return 0;
}
