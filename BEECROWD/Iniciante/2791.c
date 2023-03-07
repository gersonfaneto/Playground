#include <stdio.h>

int main(void) {
  int nCups[4];

  scanf("%d %d %d %d", &nCups[0], &nCups[1], &nCups[2], &nCups[3]);

  for(int i = 0; i < 4; i++) {
    if (nCups[i] == 1) {
      printf("%d\n", i + 1);
      break;
    }
  }

  return 0;
}
