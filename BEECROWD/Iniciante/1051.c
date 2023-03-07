#include <stdio.h>

int main(void) {
  double Income = 0, Tax = 0;

  scanf("%lf", &Income);

  while (Income > 2000) {
    if (Income > 4500) {
      Tax += (Income - 4500) * 0.28;
      Income -= (Income - 4500);
    }
    else if (Income > 3000 && Income <= 4500) {
      Tax += (Income - 3000) * 0.18;
      Income -= (Income - 3000);
    }
    else {
      Tax += (Income - 2000) * 0.08;
      Income -= (Income - 2000);
    }
  }

  (Tax > 0) ? printf("R$ %.2f\n", Tax) : printf("Isento\n");

  return 0;
}
