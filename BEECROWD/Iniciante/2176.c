#include <stdio.h>
#include <string.h>

int main(void) {
  char inMsg[255], outMsg[255];
  int qntOnes = 0;

  scanf("%[^\n]s", inMsg);

  for (int i = 0; inMsg[i] != '\0'; i++) {
    if (inMsg[i] == '1') {
      qntOnes++;
    }
  }

  strcpy(outMsg, inMsg);

  if (qntOnes % 2 == 0) {
    strcat(outMsg, "0");
  }
  else {
    strcat(outMsg, "1");
  }

  printf("%s\n", outMsg);

  return 0;
}
