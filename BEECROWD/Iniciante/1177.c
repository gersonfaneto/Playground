#include <stdio.h>

int main(){

  int allNums[1000], qntNums = 1000, startPoint = 0, anyNum;

  scanf("%d", &anyNum);
  
  for (int i = 0; i < qntNums; i++) {
    allNums[i] = startPoint;
    startPoint++;
    if (startPoint == anyNum) {
      startPoint = 0;
    }
  }

  for (int i = 0; i < qntNums; i++) {
    printf("N[%d] = %d\n", i, allNums[i]);
  }

  return 0;
}
