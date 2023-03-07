#include <stdio.h>

int main(void) {
    long long int currNum = 0;
    int outDigit = 0;

    scanf("%lld", &currNum);

    while (currNum > 0) {
      outDigit = currNum % 10;
      currNum /= 10;
      printf("%d", outDigit);
    }
    printf("\n");

    return 0;
}
