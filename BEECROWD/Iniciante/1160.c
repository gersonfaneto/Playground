#include <stdio.h>

int main(void) {
  int qntCases = 0;
  int qntYears = 0;
  int populationA = 0, populationB = 0;
  double growthRateA = 0, growthRateB = 0;

  scanf("%d", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    scanf("%d %d %lf %lf", &populationA, &populationB, &growthRateA, &growthRateB);
    growthRateA = ((growthRateA / (float) 100));
    growthRateB = ((growthRateB / (float) 100));

    while (populationA <= populationB && qntYears <= 100) {
      populationA += (populationA * growthRateA);
      populationB += (populationB * growthRateB);
      qntYears++;
    }
    (qntYears > 100) ? printf("Mais de 1 seculo.\n") : printf("%d anos.\n", qntYears);
    qntYears = 0;
  }

  return 0;
}

