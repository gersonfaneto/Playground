#include <stdio.h>

int main(void) {
  double OldSalary = 0, NewSalary = 0;
  int IncRate = 0;

  scanf("%lf", &OldSalary);

  if (OldSalary <= 400) {
    NewSalary = OldSalary + (OldSalary * 0.15);
    IncRate = 15;
  }
  else if (OldSalary <= 800) {
    NewSalary = OldSalary + (OldSalary * 0.12);
    IncRate = 12;
  }
  else if (OldSalary <= 1200) {
    NewSalary = OldSalary + (OldSalary * 0.10);
    IncRate = 10;
  }
  else if (OldSalary <= 2000) {
    NewSalary = OldSalary + (OldSalary * 0.07);
    IncRate = 7;
  }
  else {
    NewSalary = OldSalary + (OldSalary * 0.04);
    IncRate = 4;
  }

  printf("Novo salario: %.2f\n", NewSalary);
  printf("Reajuste ganho: %.2f\n", (NewSalary - OldSalary));
  printf("Em percentual: %d %%\n", IncRate);

  return 0;
}
