#include <stdio.h>

int main(void) {
  char Reindeers[][10] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
  int currReindeer = 0, totalBalls = 0, currIndex = 0;

  for (int i = 0; i < 9; i++) {
    scanf("%d", &currReindeer);
    totalBalls += currReindeer;
  }

  for (int i = 0; i < totalBalls; i++) {
    if (currIndex > 8) {
      currIndex = 0;
    }
    currIndex++;
  }

  printf("%s\n", Reindeers[currIndex - 1]);

  return 0; 
}
