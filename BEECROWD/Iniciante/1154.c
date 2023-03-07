#include <stdio.h>

int main(void) {
  int qntAges = 0, currAge = 0;
  float finalResult = 0;

  do {
    scanf("%d", &currAge);

    if (currAge >= 0) {
      finalResult += currAge;
      qntAges++;
    }

  } while (currAge >= 0);

  if (qntAges > 0) {
    printf("%.2f\n", (finalResult / qntAges));
  }

  return 0;
}
