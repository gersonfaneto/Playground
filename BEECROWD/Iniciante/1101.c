#include <stdio.h>

int main(void) {
  int N = 0, M = 0;
  int Sum = 0;

  scanf("%d%d", &N, &M);

  while (N > 0 && M > 0) {
    if (N < M) {
      for (int i = N; i <= M; i++) {
        printf("%d ", i);
        Sum += i;
      }
    }
    else {
      for (int i = M; i <= N; i++) {
        printf("%d ", i);
        Sum += i;
      }
    }
    printf("Sum=%d\n", Sum);
    scanf("%d%d", &N, &M);
    Sum = 0;
  }

  return 0;
}
