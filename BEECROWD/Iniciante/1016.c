#include <stdio.h>

int main(){

  int totalKm, totalMinutos;

  scanf("%d", &totalKm);
  
  totalMinutos = (totalKm * 60) / 30;

  printf("%d minutos\n", totalMinutos);

  return 0;
}
