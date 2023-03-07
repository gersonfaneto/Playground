#include <stdio.h>

int main(void) {
  int limitUp = 0;

  scanf("%d", &limitUp);

  for (int i = 0; i < limitUp + 1; i++) {
    if (i % 2 != 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}
