#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 25

int main(void) {
  char* firstPlayer = (char*) malloc(MAX_SIZE * sizeof(char));
  char* secondPlayer = (char*) malloc(MAX_SIZE * sizeof(char));
  char* firstChoice = (char*) malloc(MAX_SIZE * sizeof(char));
  char* secondChoice = (char*) malloc(MAX_SIZE * sizeof(char));
  int firstNum = 0, secondNum = 0, finalResult = 0, qntOper = 0;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%s %s %s %s", firstPlayer, firstChoice, secondPlayer, secondChoice);
    scanf("%d %d", &firstNum, &secondNum);
    finalResult = firstNum + secondNum;

    if (finalResult % 2 == 0 && !strcmp("PAR", firstChoice)) {
      printf("%s\n", firstPlayer);
    }
    else if (finalResult % 2 != 0 && !strcmp("IMPAR", firstChoice)) {
      printf("%s\n", firstPlayer);
    }
    else if (finalResult % 2 == 0 && !strcmp("PAR", secondChoice)) {
      printf("%s\n", secondPlayer);
    }
    else {
      printf("%s\n", secondPlayer);
    }
  }
  

  free(firstPlayer);
  free(secondPlayer);
  free(firstChoice);
  free(secondChoice);

  return 0;
}
