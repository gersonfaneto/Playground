#include <stdio.h>

int main(){

  int anyNum;

  scanf("%d", &anyNum);

  if (anyNum % 2 == 0) {
    anyNum += 1;
  }

  for (int i = 0; i < 6; i++) {
    if (anyNum % 2 != 0) {
      printf("%d\n", anyNum);
      anyNum += 2;
    }
  }

  return 0;
}
