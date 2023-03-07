#include <stdio.h>

int main(){

  int quantNums, anyNum, totalIn;

  scanf("%d", &quantNums);

  for (int i = 0; i < quantNums; i++) {
    scanf("%d", &anyNum);
    if (anyNum >= 10 && anyNum <= 20) {
      totalIn += 1;
    }
  }

  printf("%d in\n", totalIn);
  printf("%d out\n", (quantNums - totalIn));

  return 0;
}
