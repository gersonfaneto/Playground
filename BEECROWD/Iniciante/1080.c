#include <stdio.h>

int main(void) {
  int biggestNumber = 0;
  int atIndex = 0;
  int newNum = 0;

  for (int i = 0; i < 100; i++) {
    scanf("%d", &newNum);
    if (newNum > biggestNumber) {
      biggestNumber = newNum;
      atIndex = i + 1;
    }
  }

  printf("%d\n%d\n", biggestNumber, atIndex);

  return 0;
}
