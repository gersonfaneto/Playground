#include <stdio.h>

int main(void) {
  int countTo = 0;
  int last = 1, curr = 0, aux = 0; 

  scanf("%d", &countTo);

  for (int i = 1; i <= countTo; i++) {
    (i == countTo) ? printf("%d\n", curr) : printf("%d ", curr);
    aux = last + curr;
    last = curr;
    curr = aux;
  }

  return 0;
}

