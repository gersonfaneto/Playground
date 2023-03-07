#include <stdio.h>

int main(void) {

  int qIter = 0, auxValue = 0;
  int currQnt = 0, tQnt = 0;

  scanf("%d", &qIter);

  while (qIter--) {
    scanf("%d %d", &currQnt, &tQnt);

    int finalQnt = 0;
    for (auxValue = currQnt; auxValue >= tQnt; auxValue -= tQnt) {
      finalQnt++;
    }

    printf("%d\n", finalQnt + auxValue);
  }

  return 0;
}
