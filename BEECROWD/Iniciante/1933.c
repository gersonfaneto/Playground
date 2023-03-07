#include <stdio.h>

int main() {

  int firstCard, secondCard;

  scanf("%d %d", &firstCard, &secondCard);

  if (firstCard == secondCard) {
    printf("%d\n", secondCard);
  } else {
    if (secondCard > firstCard) {
      printf("%d\n", secondCard);
    } else {
      printf("%d\n", firstCard);
    }
  }

  return 0;
}
