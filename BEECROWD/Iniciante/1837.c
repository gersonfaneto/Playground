#include <stdio.h>

int main(void) {
  int A = 0, B = 0, Q = 0, R = 0;

  scanf("%d %d", &A, &B);

  if (A >= 0) {
    Q = A / B;
    R = A % B;
  }
  else {
    int C = 0, D = 0;

    C = (B < 0) ? B * -1 : B;

    for (R = 0; R < C; R++) {
      D = A - R;
      if (D % B == 0) {
        break;
      }
    }

    Q = D / B;
  }

  printf("%d %d\n", Q, R);

  return 0;
}

