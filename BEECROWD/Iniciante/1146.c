#include <stdio.h>

int main(void) {
  int countTo = 0;
  
  scanf("%d", &countTo);

  while (countTo != 0) {
    for (int i = 1; i <= countTo; i++) {
      (i == countTo) ? printf("%d\n", i) : printf("%d ", i);
    }
    scanf("%d", &countTo);
  }

  return 0;
}
