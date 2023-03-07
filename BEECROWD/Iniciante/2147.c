#include <stdio.h>
#include <string.h>

int main(void) {
  int qntCases = 0;
  char currString[10000];

  scanf("%d%*c", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    scanf("%[^\n]s", currString);
    printf("%.2f\n", (strlen(currString)) * 0.01);
    scanf("%*c");
  }

  return 0;
}
