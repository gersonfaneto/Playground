#include <stdio.h>

int main(void) {
  int qntInst = 0;

  scanf("%d", &qntInst);

  for (int i = 0; i < qntInst; i++) {
    int qntBonus = 0, fPower = 0, sPower = 0;
    int fA = 0, fD = 0, fL = 0;
    int sA = 0, sD = 0, sL = 0;

    scanf("%d", &qntBonus);
    scanf("%d %d %d", &fA, &fD, &fL);
    scanf("%d %d %d", &sA, &sD, &sL);

    fPower = ((fA + fD) / 2) + ((fL % 2 == 0) ? qntBonus : 0);
    sPower = ((sA + sD) / 2) + ((sL % 2 == 0) ? qntBonus : 0);

    if (fPower > sPower) {
      printf("Dabriel\n");
    }
    else if (sPower > fPower) {
      printf("Guarte\n");
    }
    else {
      printf("Empate\n");
    }
  }

  return 0;
}
