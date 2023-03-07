#include <stdio.h>
#include <string.h>

int main(void) {
  char currLine[1200], auxValue[1200], savedLines[100][1200];
  int currIndex = 0, auxIndex = 0, qSaved = 0;

  while (scanf("%[^\n]%*c", currLine) != EOF) {
    for (int i = 0; i < strlen(currLine); i++) {
      if (currLine[i] != ' ') {
        auxValue[currIndex++] = currLine[i];
      }
    }
    if (strcmp(auxValue, "<body>") == 0) {
      break;
    }
    memset(auxValue, 0, sizeof(auxValue));
    currIndex = 0;
  } 

  currIndex = 0;
  while (scanf("%[^\n]%*c", currLine) != EOF) {
    for (int i = 0; i < strlen(currLine); i++) {
      if (currLine[i] != ' ') {
        auxValue[currIndex++] = currLine[i];
      }
    }
    if (strcmp(auxValue, "</body>") == 0) {
      break;
    }
    strcpy(savedLines[auxIndex++], currLine);
    qSaved++;

    memset(auxValue, 0, sizeof(auxValue));
    currIndex = 0;
  }

  for (int i = 0; i < qSaved; i++) {
    printf("%s\n", savedLines[i]);
  }

  return 0;
}
