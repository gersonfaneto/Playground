#include <stdio.h>

int main(void) {
  int dHour = 0, lHour = 0, timeZone = 0;
  int totalTime = 0;

  scanf("%d %d %d", &dHour, &lHour, &timeZone);

  totalTime = dHour + lHour + timeZone;

  if (totalTime >= 24) {
    totalTime -= 24;
  }
  else if (totalTime < 0) {
    totalTime += 24;
  }

  printf("%d\n", totalTime);

  return 0;
}
