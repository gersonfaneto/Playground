#include <stdio.h>

int main(void) {
  char songTitles[][50] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
  int qntSearchs = 0, firstNum = 0, secondNum = 0;

  scanf("%d", &qntSearchs);

  for (int i = 0; i < qntSearchs; i++) {
    scanf("%d %d", &firstNum, &secondNum);
    printf("%s\n", songTitles[firstNum + secondNum]);
  }

  return 0;
}
