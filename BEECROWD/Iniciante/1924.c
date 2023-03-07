#include <stdio.h>

int main() {

  int qntOper;
  char anyString[255];

  scanf("%d", &qntOper);

  for (int i = 0; i <= qntOper; i++) {
    fgets(anyString, 50, stdin);
  }

  printf("Ciencia da Computacao\n");

  return 0;
}
