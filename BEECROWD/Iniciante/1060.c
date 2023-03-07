#include <stdio.h>

int main(){

  float anyNum;
  int quantPos;

  for (int i = 0; i < 6; i++) {
    scanf("%f", &anyNum);
    if (anyNum > 0) {
      quantPos += 1;
    }
  }

  printf("%d valores positivos\n", quantPos);

  return 0;
}
