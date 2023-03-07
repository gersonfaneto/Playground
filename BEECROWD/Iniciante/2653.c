#include <stdio.h>
#include <string.h>

int main(void) {
  char currString[100], allStrings[100][100];
  int qntJews = 0, qntStrings = 0, hasAlready = 0;

  while (scanf("%s%*c", currString) != EOF) {
    strcpy(allStrings[qntStrings], currString);
    qntStrings++;

    for (int i = 0; i < qntStrings; i++) {
      if (strcmp(currString, allStrings[i]) == 0 && qntStrings != 1) {
        hasAlready = 1;
        break;
      }
    }

    if (hasAlready == 0) {
      qntJews++;
    }
    hasAlready = 0;
  }

  printf("%d\n", qntJews);

  return 0;
}
