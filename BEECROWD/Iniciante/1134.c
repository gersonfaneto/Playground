#include <stdio.h>

int main(void) {
  int qntAlcool = 0, qntDiesel = 0, qntGas = 0;
  int currChoice = 0;

  do {
    scanf("%d", &currChoice);

    switch (currChoice) {
      case 1:
        qntAlcool++;
        break;
      case 2:
        qntGas++;
        break;
      case 3:
        qntDiesel++;
        break;
      default:
        break;
    }
  } while (currChoice != 4);

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", qntAlcool);
  printf("Gasolina: %d\n", qntGas);
  printf("Diesel: %d\n", qntDiesel);

  return 0;
}
