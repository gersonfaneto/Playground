#include <stdio.h>

int main(void) {
  int totalTime = 0, fToy = 0, sToy = 0;

  scanf("%d", &totalTime);
  scanf("%d %d", &fToy, &sToy);

  if (fToy + sToy <= totalTime) {
    printf("Farei hoje!\n");
  }
  else {
    printf("Deixa para amanha!\n");
  }

  return 0;
}
