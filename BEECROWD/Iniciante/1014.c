#include <stdio.h>

int main(){

  int totalKm;
  float totalFuel, finalConsume;

  scanf("%d", &totalKm);
  scanf("%f", &totalFuel);

  finalConsume = totalKm / totalFuel;

  printf("%.3f km/l\n", finalConsume);

  return 0;
}
