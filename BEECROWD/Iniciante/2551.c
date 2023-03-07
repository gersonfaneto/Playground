#include <stdio.h>

int main(void) {
  int qntDays = 0;

  while (scanf("%d", &qntDays) != EOF) {
    int totalDist = 0, totalTime = 0;
    int bestDays[qntDays], currDay = 0;
    float bestSpeed = 0;

    for (int i = 0; i < qntDays; i++) {
      scanf("%d %d", &totalTime, &totalDist);
      if (totalDist / (float) totalTime > bestSpeed) {
        bestDays[currDay++] = i + 1;
        bestSpeed = totalDist / (float) totalTime;
      }
    }

    for (int i = 0; i < currDay; i++) {
      printf("%d\n", bestDays[i]);
    }
  }

  return 0;
}
