#include <stdio.h>

int main(){

  int firstNum, secondNum;

  do {
    scanf("%d %d", &firstNum, &secondNum);

    if (firstNum < secondNum) {
      printf("Crescente\n");
    } else if (secondNum < firstNum) {
      printf("Decrescente\n");
    }
  } while(firstNum != secondNum);

  return 0;
}
