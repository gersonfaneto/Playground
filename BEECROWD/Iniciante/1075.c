#include <stdio.h>

int main(void) {
  int anyNum = 0;

  scanf("%d", &anyNum);

  for (int i = 1; i < 10000; i++) {
    if (i % anyNum == 2) {
      printf("%d\n", i);
    }
  }

  return 0;
}
