#include <stdio.h>

int main(void) {
  long int pTHit = 0, pTBlock = 0, pTAttack = 0;
  long int pSHit = 0, pSBlock = 0, pSAttack = 0;
  long int tHit = 0, tBlock = 0, tAttack = 0;
  long int sHit = 0, sBlock = 0, sAttack = 0;
  int qntOper = 0;
  char playerName[50];

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%s%*c", playerName);
    scanf("%ld %ld %ld", &pTHit, &pTBlock, &pTAttack);
    scanf("%ld %ld %ld", &pSHit, &pSBlock, &pSAttack); 

    tHit += pTHit, tBlock += pTBlock, tAttack += pTAttack;
    sHit += pSHit, sBlock += pSBlock, sAttack += pSAttack;
  }

  printf("Pontos de Saque: %.2f %%.\n", (sHit / (float) tHit) * 100);
  printf("Pontos de Bloqueio: %.2f %%.\n", (sBlock / (float) tBlock) * 100);
  printf("Pontos de Ataque: %.2f %%.\n", (sAttack / (float) tAttack) * 100);

  return 0;
}
