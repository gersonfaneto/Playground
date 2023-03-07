#include <stdio.h>

int main(void) {
  unsigned long long int qntDucks = 0;

  while (qntDucks != -1) {
    scanf("%llu", &qntDucks);
    if (qntDucks != -1) {
      printf("%llu\n", (qntDucks == 0) ? 0 : --qntDucks);
    }
  }

  return 0;
}
