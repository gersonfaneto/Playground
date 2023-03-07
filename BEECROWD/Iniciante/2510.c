#include <stdio.h>

int main(void) {
  int qntIter = 0;
  char villainName[30];

  scanf("%d", &qntIter);
  
  for (int i = 0; i < qntIter; i++) {
    scanf("%[^\n]", villainName);
    printf("Y\n");
  }

  return 0;
}
