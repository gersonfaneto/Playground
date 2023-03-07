#include <stdio.h>

int main(){

  int anyNum;

  scanf("%d", &anyNum);

  for (int i = 1; i <= 10 ; i++) {
    printf("%d x %d = %d\n", i, anyNum, (i * anyNum));
  }

  return 0;
}
