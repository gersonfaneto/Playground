#include <stdio.h>

int main() {

  int rightAnswer, correctGuesses, tempVar;

  scanf("%d", &rightAnswer);

  for (int i = 0; i < 5; i++) {
    scanf("%d", &tempVar);
    if (tempVar == rightAnswer) {
      correctGuesses++;
    }
  }

  printf("%d\n", correctGuesses);

  return 0;
}
