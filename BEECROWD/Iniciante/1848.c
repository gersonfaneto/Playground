#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Power(int, int);

int main(void) {
  char* currString = (char*) malloc(24 * sizeof(char)); 
  int finalResult = 0, currIndex = 2;

  for (int i = 0; i < 3; i++) {
    fgets(currString, 24, stdin);
    while (strlen(currString) == 4) {
      for (int j = 0; j < 3; j++) {
        if (currString[j] == '*') {
          finalResult += Power(2, currIndex);
        }
        currIndex--;
      }
      fgets(currString, 24, stdin);
      currIndex = 2;
    }
    printf("%d\n", finalResult);
    finalResult = 0;
  }

  return 0;
}

int Power(int tNum, int tPower) {
  int finalResult = 1;

  for (int i = 0; i < tPower; i++) {
    finalResult *= tNum;
  }

  return finalResult;
}
