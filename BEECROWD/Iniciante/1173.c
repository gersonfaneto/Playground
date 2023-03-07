#include <stdio.h>

int main(){

  int allNums[10], qntNums = 10, anyNum;

  scanf("%d", &anyNum);
  
  for (int i = 0; i < qntNums; i++) {
    allNums[i] = anyNum;
    anyNum *= 2;
  }

  for (int i = 0; i < qntNums; i++) {
    printf("N[%d] = %d\n", i, allNums[i]);
  }

  return 0;
}
