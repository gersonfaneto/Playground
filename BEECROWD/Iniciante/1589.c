#include <stdio.h>

int main(){

  int qntOper, primeiroRaio, segundoRaio;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%d %d", &primeiroRaio, &segundoRaio);
    printf("%d\n", (primeiroRaio + segundoRaio));
  }

  return 0;
}
