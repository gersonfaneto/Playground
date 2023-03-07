#include <stdio.h>

int main(void) {
  int currNum = 97;

  for (int i = 0; i < 26; i++) {
    printf("%d e %c\n", currNum + i, currNum + i);
  }

  return 0;
}
