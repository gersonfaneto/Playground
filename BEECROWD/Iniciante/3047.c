#include <stdio.h>

int main(void) {
  int M = 0, A = 0, B = 0, C = 0;

  scanf("%d\n%d\n%d", &M, &A, &B);

  if (M - (A + B) > A && M - (A + B) > B) {
    C = M - (A + B);
  }
  else if (A > B) {
    C = A;
  }
  else {
    C = B;
  }

  printf("%d\n", C);

  return 0;
}
