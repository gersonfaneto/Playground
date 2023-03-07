#include <stdio.h>

int main(void) {
  char currString[30];

  while (scanf("%s", currString) != EOF) {
    int qChars = 0, currChar = 0;

    scanf("%*c%d", &qChars);

    for (int i = 0; i < qChars; i++) {
      scanf("%d", &currChar);
      printf("%c", currString[currChar - 1]);
    }
    printf("\n");

  }

  return 0;
}
