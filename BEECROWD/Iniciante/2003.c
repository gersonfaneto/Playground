#include <stdio.h>

int main(void) {
  int qHour = 0, qMin = 0, finalResult = 0;

  while (scanf("%d:%d", &qHour, &qMin) != EOF) {
    finalResult = (qHour * 60) + (qMin - 420);
    (finalResult > 0) ? printf("Atraso maximo: %d\n", finalResult) : printf("Atraso maximo: 0\n");
  }

  return 0;
}
