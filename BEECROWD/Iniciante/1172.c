#include <stdio.h>

int main(){

  int allNums[10], qntNums = 10, anyNum;

  for (int i = 0; i < qntNums; i++) {
    scanf("%d", &anyNum);
    if (anyNum <= 0) {
      anyNum = 1;
    }
    allNums[i] = anyNum;
  }

  for (int i = 0; i < qntNums; i++) {
    printf("X[%d] = %d\n", i, allNums[i]);
  }

  return 0;
}
