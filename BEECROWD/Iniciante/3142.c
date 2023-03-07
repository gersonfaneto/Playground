#include <stdio.h>
#include <string.h>

int main(void) {
  char tColumn[15];

  while (scanf("%s%*c", tColumn) != EOF) {
    int cIndex = 0;

    if (strlen(tColumn) == 1)
      cIndex += tColumn[0] - 64;
    else if (strlen(tColumn) == 2)
      cIndex += ((tColumn[0] - 64) * 26) + (tColumn[1] - 64);
    else if (strlen(tColumn) == 3)
      cIndex += (tColumn[0] - 64) * 26 * (tColumn[1] - 64) + (tColumn[2] - 64);

      printf("%d\n", cIndex);
  }

  return 0;
}
