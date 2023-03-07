#include <stdio.h>

int main(void) {
  int qntRows = 0, countTo = 0;
  int startPoint = 1;

  scanf("%d%d", &qntRows, &countTo);

  while (startPoint <= countTo) {
    for (int i = 0; i < qntRows; i++) {
      (i == (qntRows - 1)) ? printf("%d\n", startPoint) : printf("%d ", startPoint);
      startPoint++;
    }
  }

  return 0;
}
