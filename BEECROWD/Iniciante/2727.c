#include <stdio.h>
#include <string.h>

int main(void) {
  char Alphabet[][3] = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz"};
  char inMsg[150];
  int qChars = 0, qDots = 0, qSpaces = 0;

  while (scanf("%d%*c", &qChars) != EOF) {
    for (int i = 0; i < qChars; i++) {
      scanf("%[^\n]", inMsg);
      for (unsigned long int j = 0; j < strlen(inMsg); j++) {
        if (inMsg[j] == '.') {
          qDots++;
        }
        else {
          qSpaces++;
        }
      } 
      printf("%c\n", Alphabet[qSpaces][(qDots / (qSpaces + 1)) - 1]);
      qDots = 0;
      qSpaces = 0;
      scanf("%*c");
    }
  }

  return 0;
}
