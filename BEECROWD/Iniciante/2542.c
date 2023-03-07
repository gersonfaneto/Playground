#include <stdio.h>

int main(void) {
  int qntAttrib = 0;

  while (scanf("%d", &qntAttrib) != EOF) {
    int qntMarcos = 0, qntLeonardo = 0;

    scanf("%d %d", &qntMarcos, &qntLeonardo);
    int mCards[qntMarcos][qntAttrib], lCards[qntLeonardo][qntAttrib];

    for (int i = 0; i < qntMarcos; i++) {
      for (int j = 0; j < qntAttrib; j++) {
        scanf("%d", &mCards[i][j]);
      }
    }

    for (int i = 0; i < qntLeonardo; i++) {
      for (int j = 0; j < qntAttrib; j++) {
        scanf("%d", &lCards[i][j]);
      }
    }

    int mDraws = 0, lDraws = 0;
    scanf("%d %d", &mDraws, &lDraws);

    int choosenAttrib = 0;
    scanf("%d", &choosenAttrib);

    if (mCards[mDraws - 1][choosenAttrib - 1] > lCards[lDraws - 1][choosenAttrib - 1]) {
      printf("Marcos\n");
    }
    else if (mCards[mDraws - 1][choosenAttrib - 1] < lCards[lDraws - 1][choosenAttrib - 1]) {
      printf("Leonardo\n");
    }
    else {
      printf("Empate\n");
    }
  }

  return 0; 
}
