#include <stdio.h>

int main(){

  int numI = 1, numJ = 7;

  while (numI <= 9) {
    for (int i = 1; i <= 3; i++) {
      printf("I=%d J=%d\n", numI, numJ);
      
      numJ -= 1;
      
      if (i == 3) {
        numJ += 5;
        numI += 2;
      }
    }
    
  }

  return 0;
}
