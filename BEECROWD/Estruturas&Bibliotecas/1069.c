#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main(void) {

  int qntSequences = 0, qntOpen = 0, qntClose = 0;
  char* diamondSequence = malloc(MAX_SIZE * sizeof(char));

  scanf("%d%*c", &qntSequences);

  for (int i = 0; i < qntSequences; i++) {
    fgets(diamondSequence, MAX_SIZE, stdin);
    diamondSequence[strlen(diamondSequence) - 1] = '\0';
    
    for (int j = 0; j < strnlen(diamondSequence, MAX_SIZE); j++) {
      if (diamondSequence[j] == '<') {
        qntOpen++;
      }
      if (diamondSequence[j] == '>' && qntOpen > 0) {
        qntClose++;
        qntOpen--;
      }
    }

    printf("%d\n", qntClose);
    qntClose = 0;
    qntOpen = 0;
  }


  return 0;
}

