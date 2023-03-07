#include <stdio.h>

int main(void) {
  int frogJump = 0, qntTubes = 0;

  scanf("%d %d", &frogJump, &qntTubes);
  int tubesHeights[qntTubes];

  for (int i = 0; i < qntTubes; i++) {
    scanf("%d", &tubesHeights[i]);
  }

  for (int i = 0; i < qntTubes - 1; i++) {
    if (tubesHeights[i] < tubesHeights[i + 1] && tubesHeights[i] + frogJump < tubesHeights[i + 1]) {
      printf("GAME OVER\n");
      return 0;
    }
    if (tubesHeights[i] > tubesHeights[i + 1] && tubesHeights[i] - frogJump > tubesHeights[i + 1]) {
      printf("GAME OVER\n");
      return 0;
    }
  }

  printf("YOU WIN\n");

  return 0;
}
