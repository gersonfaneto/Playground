#include <stdio.h>

int main(void) {
  int tNum = 0, currNum = 0, currMin = 0, minIndex = 0;

  scanf("%d", &tNum);

  for (int i = 0; i < tNum; i++) {
    scanf("%d", &currNum);
    if (i == 0 || currNum < currMin) {
      currMin = currNum;
      minIndex = i + 1;
    }
  }

  printf("%d\n", minIndex);

  return 0;
}
