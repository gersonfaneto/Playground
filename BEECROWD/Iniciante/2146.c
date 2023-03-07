#include <stdio.h>

int main(){

  int anyNum = 0;

  while (scanf("%d", &anyNum) != EOF) {
    printf("%d\n", anyNum - 1);
  }

  return 0;
}
