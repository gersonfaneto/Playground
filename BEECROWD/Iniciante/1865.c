#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int qntOper = 0, heroPower = 0;
  char* currString = (char*) malloc(255 * sizeof(char));

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%s %d", currString, &heroPower);

    if (strcmp("Thor", currString) == 0) {
      printf("Y\n");
    }
    else {
      printf("N\n");
    }
  }

  free(currString);

  return 0;
}
