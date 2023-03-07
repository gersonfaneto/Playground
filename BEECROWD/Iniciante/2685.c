#include <stdio.h>

int main(void) {
  int currIncl = 0;

  while (scanf("%d", &currIncl) != EOF) {
    if (currIncl < 90 || currIncl == 360) {
      printf("Bom Dia!!\n");
    }
    else if (currIncl < 180) {
      printf("Boa Tarde!!\n");
    }
    else if (currIncl < 270) {
      printf("Boa Noite!!\n");
    }
    else {
      printf("De Madrugada!!\n");
    }
  }

  return 0;
}
