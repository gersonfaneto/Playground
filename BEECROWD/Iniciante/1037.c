#include <stdio.h>

int main(void) {
  double anyNum = 0;

  scanf("%lf", &anyNum);

  if (anyNum < 0 || anyNum > 100) {
     printf("Fora de intervalo\n");
  }
  else if (anyNum >= 0 && anyNum <= 25.0000) {
      printf("Intervalo [0,25]\n");
  }
  else if (anyNum >= 25.00001 && anyNum <= 50.0000000) {
      printf("Intervalo (25,50]\n");
  }
  else if (anyNum >=  50.0000001 && anyNum <= 75.0000000) {
      printf("Intervalo (50,75]\n");
  }
  else if(anyNum >= 75.0000001 && anyNum <= 100.0000000) {
      printf("Intervalo (75,100]\n");
  }

  return 0;
}
