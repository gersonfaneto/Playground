#include <stdio.h>

int main(){

  int quantPares;

  scanf("%d", &quantPares);

  for (int i = 1; i <= quantPares; i++) {
    if (i % 2 == 0) {
      printf("%d^2 = %d\n", i, (i * i));
    }
  }

  return 0;
}
