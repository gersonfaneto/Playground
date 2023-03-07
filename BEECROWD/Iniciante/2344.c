#include <stdio.h>

int main(void) {
  int tScore = 0;

  scanf("%d", &tScore);

  if (tScore == 0) {
    printf("E\n");
  }
  else if (tScore <= 35) {
    printf("D\n");
  }
  else if (tScore <= 60) {
    printf("C\n");
  }
  else if (tScore <= 85) {
    printf("B\n");
  }
  else {
    printf("A\n");
  }

  return 0;
}
