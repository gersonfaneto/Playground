#include <stdio.h>

int main(void) {
  int qntDays = 0, qntMonths = 0, qntYears = 0;

  scanf("%d", &qntDays);

  qntYears = qntDays / 365;
  qntDays -= (qntYears * 365);

  qntMonths = qntDays / 30;
  qntDays -= (qntMonths * 30);

  printf("%d ano(s)\n", qntYears);
  printf("%d mes(es)\n", qntMonths);
  printf("%d dia(s)\n", qntDays);

  return 0;
}
