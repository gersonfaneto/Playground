#include <stdio.h>

int main(void) {
  int tDist = 0;

  scanf("%d", &tDist);

  if (tDist <= 800) {
    printf("1\n");
  }
  else if (tDist <= 1400) {
    printf("2\n");
  }
  else {
    printf("3\n");
  }

  return 0;
}
