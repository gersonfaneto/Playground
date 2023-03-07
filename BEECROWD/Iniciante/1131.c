#include <stdio.h>

int main(void) {
  int qntGremio = 0, qntInter = 0, qntTies = 0, qntGames = 0;
  int gremioWins = 0, interWins = 0, newGame = 0;

  do {
    scanf("%d %d", &qntInter, &qntGremio);

    if (qntInter > qntGremio) {
      interWins++;
    }
    else if (qntGremio > qntInter) {
      gremioWins++;
    }
    else {
      qntTies++;
    }

    qntGames++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &newGame);

  } while (newGame != 2);

  printf("%d grenais\n", qntGames);
  printf("Inter:%d\n", interWins);
  printf("Gremio:%d\n", gremioWins);
  printf("Empates:%d\n", qntTies);

  if (interWins > gremioWins) {
    printf("Inter venceu mais\n");
  }
  else if (gremioWins > interWins) {
    printf("Gremio venceu mais\n");
  }
  else {
    printf("Nao houve vencedor\n");
  }

  return 0;
}

