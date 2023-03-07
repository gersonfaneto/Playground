#include <stdio.h>

int main(){

  int numI = 1, numJ = 60;

  while (numJ >= 0) {
    printf("I=%d J=%d\n", numI, numJ);
    numI += 3;
    numJ -= 5;
  }

  return 0;
}
