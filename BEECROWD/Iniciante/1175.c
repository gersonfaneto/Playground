#include <stdio.h>

int main(void) {
  int DataBase[20];
  int inNum = 0;
  int countDown = 20, countUp = 9;

  for (int i = 0; i < 20; i++) {
    (i <= 9) ? scanf("%d", &DataBase[--countDown]) :
      scanf("%d", &DataBase[countUp--]);
  }

  for (int i = 0; i < 20; i++) {
    printf("N[%d] = %d\n", i, DataBase[i]);
  }

  return 0;
}
