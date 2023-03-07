#include <stdio.h>

int main(void) {
  double firstNum = 234.345, otherNum = 45.698;

  printf("%.6lf - %.6lf\n", firstNum, otherNum);
  printf("%.0lf - %.0lf\n", firstNum, otherNum);
  printf("%.1lf - %.1lf\n", firstNum, otherNum);
  printf("%.2lf - %.2lf\n", firstNum, otherNum);
  printf("%.3lf - %.3lf\n", firstNum, otherNum);
  printf("%e - %e\n", firstNum, otherNum);
  printf("%E - %E\n", firstNum, otherNum);
  printf("%.3lf - %.3lf\n", firstNum, otherNum);
  printf("%.3lf - %.3lf\n", firstNum, otherNum);

  return 0;
}
