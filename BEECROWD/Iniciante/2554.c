#include <stdio.h>

int main(void) {
  int qDates = 0, qPeople = 0;

  while (scanf("%d %d", &qPeople, &qDates ) != EOF) {
    int avalDates[qDates][3], bestDate = 0, avalPeople = 0;
    int currMax = 0, auxValue = 0;

    for (int i = 0; i < qDates; i++) {
      scanf("%d/%d/%d", &avalDates[i][0], &avalDates[i][1], &avalDates[i][2]);
      for (int j = 0; j < qPeople; j++) {
        scanf("%d", &auxValue);
        avalPeople += auxValue;
      }
      if (avalPeople > currMax) {
        currMax = avalPeople;
        bestDate = i;
      }
      avalPeople = 0;
    }

    if (currMax == qPeople) {
      printf("%d/%d/%d\n", avalDates[bestDate][0], avalDates[bestDate][1], avalDates[bestDate][2]);
    }
    else {
      printf("Pizza antes de FdI\n");
    }
  }

  return 0;
}
