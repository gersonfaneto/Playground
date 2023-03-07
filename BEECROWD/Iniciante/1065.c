#include <stdio.h>

int main(){

  int anyNum, quantPares;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &anyNum);
    if (anyNum % 2 == 0) {
      quantPares += 1;
    }
  }

  printf("%d valores pares\n", quantPares);

  return 0;
}
