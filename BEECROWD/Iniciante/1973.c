#include <stdio.h>

int main(void) {
  int qntStars = 0;

  scanf("%d", &qntStars);
  int farmsSheep[qntStars], visitedFarms[qntStars];

  for (int i = 0; i < qntStars; i++) {
    scanf("%d", &farmsSheep[i]);
    visitedFarms[i] = 0;
  }

  int lowerLimit = 0, upperLimit = qntStars - 1, currIndex = 0, qntVisited = 0;
  long long int totalLeft = 0;

  while (currIndex >= lowerLimit && currIndex <= upperLimit) {
    if (visitedFarms[currIndex] == 0) {
      visitedFarms[currIndex] = 1;
    }

    if (farmsSheep[currIndex] % 2 == 0) {
      if (farmsSheep[currIndex] > 0) {
        farmsSheep[currIndex]--;
      }
      currIndex--;
    }
    else {
      if (farmsSheep[currIndex] > 0) {
        farmsSheep[currIndex]--;
      }
      currIndex++;
    }
  }

  for (int i = 0; i < qntStars; i++) {
    qntVisited += visitedFarms[i];
    totalLeft += farmsSheep[i];
  }

  printf("%d %lld\n", qntVisited, totalLeft);

  return 0;
}
