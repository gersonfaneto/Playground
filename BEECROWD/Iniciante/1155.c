#include <stdio.h>

int main(void) {
  double finalResult = 0;
  
  for (int i = 1; i <= 100; i++) {
    finalResult += (1 / (float) i);
  }

  printf("%.2f\n", finalResult);

  return 0;
}
