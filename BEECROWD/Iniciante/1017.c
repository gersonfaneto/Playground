#include <stdio.h>

int main(){

  int tempoViagem, velocidadeMedia;
  float combustivelGasto;

  scanf("%d", &tempoViagem);
  scanf("%d", &velocidadeMedia);

  combustivelGasto = (tempoViagem * velocidadeMedia) / 12.0;

  printf("%.3f\n", combustivelGasto);

  return 0;
}
