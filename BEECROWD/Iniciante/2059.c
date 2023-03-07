#include <stdio.h>

int main(void) {
  int P = 0, J1 = 0, J2 = 0, R = 0, A = 0;

  scanf("%d %d %d %d %d", &P, &J1, &J2, &R, &A);

  if (R == 1 && A == 1) {
    printf("Jogador 2 ganha!\n");
  }
  else if (R == 1 && A == 0) {
    printf("Jogador 1 ganha!\n");
  }
  else if (R == 0 && A == 1) {
    printf("Jogador 1 ganha!\n");
  }
  else {
    if (P == 1) {
      if ((J1 + J2) % 2 == 0) {
        printf("Jogador 1 ganha!\n");
      }
      else {
        printf("Jogador 2 ganha!\n");
      }
    }
    else {
      if ((J1 + J2) % 2 != 0) {
        printf("Jogador 1 ganha!\n");
      }
      else {
        printf("Jogador 2 ganha!\n");
      }
    }
  }

  return 0;
}
