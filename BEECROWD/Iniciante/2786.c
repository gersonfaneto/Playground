#include <stdio.h>

int main(void) {
  int lSize = 0, cSize = 0;

  scanf("%d\n%d", &lSize, &cSize);

  printf("%d\n", (lSize * cSize) + ((lSize - 1) * (cSize - 1)));
  printf("%d\n", ((lSize - 1) * 2) + ((cSize -1) * 2));

  return 0;
}
