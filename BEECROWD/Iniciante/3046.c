#include <stdio.h>

int main(void) {
  int tPieces = 0;

  scanf("%d", &tPieces);

  printf("%d\n", ((tPieces + 1) * (tPieces + 2)) / 2);

  return 0;
}
