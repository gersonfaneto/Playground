#include <stdio.h>

int main(void) {
  int A = 0, B = 0, C = 0, D = 0;

  scanf("%d %d %d %d", &A, &B, &C, &D);

  if (A < B + C && B < A + C && C < A + B) {
    printf("S\n");
  }
  else if (A < B + D && B < A + D && D < A + B) {
    printf("S\n");
  }
  else if (A < C + D && C < A + D && D < A + C) {
    printf("S\n");
  }
  else if (B < C + D && C < D + B && D < C + B) {
    printf("S\n");
  }
  else {
    printf("N\n");
  }

  return 0;
}
