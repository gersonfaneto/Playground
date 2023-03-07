#include <stdio.h>

int main(void) {
  int totalPrice = 0, givenCash = 0, toReturn = 0, qntNotes = 0;
  int Notes[] = {100, 50, 20, 10, 5, 2}, arrSize = 6;

  do {
    scanf("%d %d", &totalPrice, &givenCash);
    toReturn = givenCash - totalPrice;

    for (int i = 0; i < arrSize; i++) {
      while (toReturn >= Notes[i]) {
        toReturn -= Notes[i];
        qntNotes++;
      }
    }

    if (totalPrice != 0 && givenCash != 0) {
      if (qntNotes != 2) {
        printf("impossible\n");
      }
      else {
        printf("possible\n");
      }
    }

    qntNotes = 0;
  } while (totalPrice != 0 && givenCash != 0);

  return 0;
}
