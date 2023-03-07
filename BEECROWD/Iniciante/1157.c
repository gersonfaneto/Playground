#include <stdio.h>

int main(){

  int quantDivs = 0, anyNum;

  scanf("%d", &anyNum);

  for (int i = 1; i <= anyNum; i++) {
    if (anyNum % i == 0) {
      printf("%d\n", i);
      }
  }

  return 0;
}
