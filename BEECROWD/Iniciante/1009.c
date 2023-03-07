#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char* empName = (char*) malloc(255 * sizeof(char));
  double totalSales = 0, baseIn = 0, finalIn = 0;

  scanf("%s%*c", empName);
  scanf("%lf", &baseIn);
  scanf("%lf", &totalSales);

  finalIn = baseIn + (totalSales * 0.15);

  printf("TOTAL = R$ %.2f\n", finalIn);

  free(empName);

  return 0;
}
