#include <stdio.h>

int main(void) {
  int qntCases = 0, totalCases = 0, qntAnimals = 0;
  char wichAnimal;
  int qntR = 0, qntC = 0, qntS = 0;

  scanf("%d%*c", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    scanf("%d %c", &qntAnimals, &wichAnimal);
    switch (wichAnimal) {
      case 'C':
        qntC += qntAnimals;
        break;
      case 'R':
        qntR += qntAnimals;
        break;
      case 'S':
        qntS += qntAnimals;
        break;
    }
    totalCases += qntAnimals;
  }

  printf("Total: %d cobaias\n", totalCases);
  printf("Total de coelhos: %d\n", qntC);
  printf("Total de ratos: %d\n", qntR);
  printf("Total de sapos: %d\n", qntS);
  printf("Percentual de coelhos: %.2f %%\n", (qntC / (float) totalCases) * 100);
  printf("Percentual de ratos: %.2f %%\n", (qntR / (float) totalCases) * 100);
  printf("Percentual de sapos: %.2f %%\n", (qntS / (float) totalCases) * 100);

  return 0;
}
