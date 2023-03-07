#include <stdio.h>

int main(){

  const int senhaCorreta = 2002;
  int senhaIn, acessoIn = 1;

  while (acessoIn != 0) {
    scanf("%d", &senhaIn);
    if (senhaIn == senhaCorreta) {
      acessoIn = 0;
    } else {
      printf("Senha Invalida\n");
    }

  }

  printf("Acesso Permitido\n");

  return 0;
}
