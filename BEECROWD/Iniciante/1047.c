#include <stdio.h>

int main(void) {
  int sHour, sMin, eHour, eMin;
  int tHour, tMin;

  scanf("%d %d %d %d", &sHour, &sMin, &eHour, &eMin);

  tHour = eHour - sHour;
  tMin = eMin - sMin;

  if (tHour <= 0) {
    tHour += 24;
  }

  if (tMin < 0) {
    tHour--;
    tMin += 60;
  }

  if (tHour > 23 && tMin > 0) {
    tHour = 0;
  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tHour, tMin);

  return 0;
}
