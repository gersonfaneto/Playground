#include <stdio.h>

int main(){

  int quantHoras, quantMinutos, quantSegundos;
  int tempoTotal;

  scanf("%d", &tempoTotal);

  quantHoras = tempoTotal / 3600 ;
  quantMinutos = (tempoTotal % 3600) / 60;
  quantSegundos = tempoTotal -  (quantHoras * 3600) - (quantMinutos * 60);

  printf("%d:%d:%d\n", quantHoras, quantMinutos, quantSegundos);

  return 0;
}
