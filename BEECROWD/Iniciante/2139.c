#include <stdio.h>

int main(void) {
  int tDay = 0, tMonth = 0, totalDays = 0;
  int monthDays[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  while (scanf("%d %d", &tMonth, &tDay) != EOF) {
    for (int i = 0; i < tMonth - 1; i++) {
      totalDays += monthDays[i];
    }
    totalDays += tDay;

    if (totalDays > 360) {
      printf("Ja passou!\n");
    }
    else if (totalDays == 359) {
      printf("E vespera de natal!\n");
    }
    else if (totalDays == 360) {
      printf("E natal!\n");
    }
    else {
      printf("Faltam %d dias para o natal!\n", 360 - totalDays);
    }

    totalDays = 0;
  }

  return 0;
}
