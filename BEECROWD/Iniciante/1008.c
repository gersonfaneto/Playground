#include <stdio.h>  

int main(void) {
  int empId, nHours;
  float perHour, totalIn;

  scanf("%d%d%f", &empId, &nHours, &perHour);

  totalIn = perHour * nHours;

  printf("NUMBER = %d\nSALARY = U$ %.2f\n", empId, totalIn);

  return 0;
}
