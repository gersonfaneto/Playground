#include <stdio.h>
#include <string.h>

int main(void) {
  char firstString[256], secondString[256];
  int qntCases = 1;

  while (scanf("%s\n%s", firstString, secondString) != EOF) {
    unsigned long int firstLen = strlen(firstString), secondLen = strlen(secondString);
    int lastPos = 0, qntSubs = 0, currIndex = 0, tSize = 0;

    for (int i = 0; i < secondLen; i++) {
      if (secondString[i] == firstString[0]) {
        currIndex = i;
        for (int j = 0; j < firstLen; j++) {
          if (secondString[currIndex] != firstString[j]) {
            break;
          }
          currIndex++;
          tSize++;
        }
        if (tSize == firstLen) {
          lastPos = i + 1;
          qntSubs++;
        }
        tSize = 0;
      }
    }

    printf("Caso #%d:\n", qntCases);
    if (qntSubs > 0) {
      printf("Qtd.Subsequencias: %d\n", qntSubs);
      printf("Pos: %d\n", lastPos);
    }
    else {
      printf("Nao existe subsequencia\n");
    }
    qntCases++;
    printf("\n");
  }

  return 0;
}
