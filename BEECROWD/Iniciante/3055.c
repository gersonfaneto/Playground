#include <stdio.h>

int main(void) {
  int tAver = 0, fNote = 0;

  scanf("%d\n%d", &fNote, &tAver);

  printf("%d\n", (tAver * 2) - fNote);

  return 0;
}
