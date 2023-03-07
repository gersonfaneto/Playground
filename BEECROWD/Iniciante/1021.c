#include <stdio.h>

int main(void) {
  int totalInt = 0, totalDec = 0;
  int Coins[] = {100, 50, 25, 10, 5, 1};
  int Notes[] = {100, 50, 20, 10, 5, 2};
  float P_Coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
  float P_Notes[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
  int currValue = 0, currIndex = 0, arrSize = 6;
  int qntNotes = 0, qntCoins = 0;

  scanf("%d.%d", &totalInt, &totalDec);

  printf("NOTAS:\n");
  for (int i = 0; i < arrSize; i++) {
    while (totalInt >= Notes[i]) {
      totalInt -= Notes[i];
      qntNotes++;
    }
    printf("%d nota(s) de R$ %.2f\n", qntNotes, P_Notes[i]);
    qntNotes = 0;
  }

  if (totalInt == 1) {
    totalDec += 100;
  }

  printf("MOEDAS:\n");
  for (int i = 0; i < arrSize; i++) {
    while (totalDec >= Coins[i]) {
      totalDec -= Coins[i];
      qntCoins++;
    }
    printf("%d moeda(s) de R$ %.2f\n", qntCoins, P_Coins[i]);
    qntCoins = 0;
  }

  return 0;
}
