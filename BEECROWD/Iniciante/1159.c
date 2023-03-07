#include <stdio.h>

int main(void) {
  int finalResult = 0;
  int inEven = 0;

  scanf("%d", &inEven);

  while (inEven != 0) {
    if (inEven % 2 == 0) {
      finalResult += inEven;
    }
    else {
      finalResult += ++inEven;
    }
    for (int i = 1; i <= 4; i++) {
      inEven += 2;
      finalResult += inEven;
    }
    printf("%d\n", finalResult);
    scanf("%d", &inEven);
    finalResult = 0;
  }

  return 0;
}
