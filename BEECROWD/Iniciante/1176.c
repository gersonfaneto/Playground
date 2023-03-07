#include <stdio.h>

int main(void) {
  long long int Fibonacci[60] = {0, 1};
  int tNum = 0, fIndex = 0;

  scanf("%d", &tNum);

  for (int i = 0; i < tNum; i++) {
    scanf("%d", &fIndex);
    if (fIndex > 1) {
      for (int i = 2; i <= fIndex; i++) {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
      }
    }
    printf("Fib(%d) = %lld\n", fIndex, Fibonacci[fIndex]);
  }

  return 0;
}
