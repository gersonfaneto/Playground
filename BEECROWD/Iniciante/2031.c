#include <stdio.h>
#include <string.h>

int main(void) {
  int qntCases = 0;
  char firstMove[10], secondMove[10];

  scanf("%d%*c", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    fgets(firstMove, 10, stdin);
    fgets(secondMove, 10, stdin);

    firstMove[strlen(firstMove) - 1] = '\0';
    secondMove[strlen(secondMove) - 1] = '\0';

    if (!strcmp(firstMove, "ataque")) {
      if (!strcmp(secondMove, "pedra")) {
        printf("Jogador 1 venceu\n");
      }
      else if (!strcmp(secondMove, "papel")) {
        printf("Jogador 1 venceu\n");
      }
      else {
        printf("Aniquilacao mutua\n");
      }
    }
    else if (!strcmp(firstMove, "pedra")) {
      if (!strcmp(secondMove, "pedra")) {
        printf("Sem ganhador\n");
      }
      else if (!strcmp(secondMove, "papel")) {
        printf("Jogador 1 venceu\n");
      }
      else {
        printf("Jogador 2 venceu\n");
      }
    }
    else {
      if (!strcmp(secondMove, "pedra")) {
        printf("Jogador 2 venceu\n");
      }
      else if (!strcmp(secondMove, "papel")) {
        printf("Ambos venceram\n");
      }
      else {
        printf("Jogador 2 venceu\n");
      }
    }
  }

  return 0;
}


