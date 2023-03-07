#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

int getGCD(int, int);

int main(void) {
  int firstN = 0, firstD = 0, secondN = 0, secondD = 0;
  int qntOper = 0;
  char* opType = NULL;

  scanf("%d%*c", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    char* nExp = (char*) malloc(MAX_SIZE * sizeof(char));
    int upperResult = 0, bottomResult = 0;
    fgets(nExp, MAX_SIZE, stdin);

    int arrIndex = 0;
    char* removedElement = strtok(nExp, " ");
    char** noSpace = (char**) malloc(6 * sizeof(char*));
    while (removedElement != NULL) {
      noSpace[arrIndex] = removedElement;
      arrIndex++;
      removedElement = strtok(NULL, " ");
    }

    firstN = atoi(noSpace[0]);
    firstD = atoi(noSpace[2]); 
    secondN = atoi(noSpace[4]);
    secondD = atoi(noSpace[6]);
    opType = noSpace[3];

    if (strcmp(opType, "+") == 0) {
      upperResult = (firstN * secondD + secondN * firstD);
      bottomResult = (firstD * secondD);
    }
    else if (strcmp(opType, "-") == 0) {
      upperResult = (firstN * secondD - secondN * firstD);
      bottomResult = (firstD * secondD);
    }
    else if (strcmp(opType, "*") == 0) {
      upperResult = (firstN * secondN);
      bottomResult = (firstD * secondD);
    }
    else {
      upperResult = (firstN * secondD);
      bottomResult = (secondN * firstD);
    }

    printf("%d/%d = ", upperResult, bottomResult);

    int D = getGCD(upperResult, bottomResult);
    upperResult /= D;
    bottomResult /= D; 

    if (upperResult * D < 0) {
      upperResult *= -1;
      bottomResult *= -1;
    }

    printf("%d/%d\n", upperResult, bottomResult);
  }

  return 0;
}

int getGCD(int firstNum, int secondNum) {

  int gCommonDivisor = firstNum % secondNum;

  if (gCommonDivisor == 0) {
    return secondNum;
  }
  
  else {
    return getGCD(secondNum, gCommonDivisor);
  }

}
