#include <stdio.h>

int main(void) {
    float const INC = 0.2;
    float firstValue = 0, secondValue = 1;
    int prevValue = 1, currIndex = 1;

    while (firstValue < 2.2) {
      for (int i = 0; i < 3; i++) {
        if (currIndex == 1 || currIndex == 6 || currIndex == 11) {
          printf("I=%.0f J=%.0f\n", firstValue, secondValue);
        }
        else {
          printf("I=%.1f J=%.1f\n", firstValue, secondValue);
        }
        secondValue++;
      }
      firstValue += INC;
      secondValue = (prevValue + (INC * currIndex++));
    }

    return 0;
}
