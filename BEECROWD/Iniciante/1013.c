#include <stdio.h>
#include <stdlib.h> 

int main(void) {
  int* anyNums = (int*) calloc(sizeof(int), 3);
  int newNum = 0;

  for (int i = 0; i < 3; i++) {
    scanf("%d", &newNum);
    if (newNum > anyNums[0] ) {
      anyNums[0] = newNum;
    }
    else {
      anyNums[i] = newNum;
    }
  }

  printf("%d eh o maior\n", anyNums[0]);

  return 0;
}
