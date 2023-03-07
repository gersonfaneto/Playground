#include <stdio.h>

void Sort(float[], int);

int main(void) {
  int qntPlayer = 0;

  scanf("%d", &qntPlayer);

  for (int i = 0; i < qntPlayer; i++) {
    char playerName[50];
    float playerScores[7], finalScore = 0, diffLevel = 0;

    scanf("%s%*c", playerName);
    scanf("%f", &diffLevel);

    for (int i = 0; i < 7; i++) {
      scanf("%f", &playerScores[i]);
    }

    Sort(playerScores, 7);

    for (int i = 1; i < 6; i++) {
      finalScore += playerScores[i];
    }
    finalScore *= diffLevel;

    printf("%s %.2f\n", playerName, finalScore);
  }

  return 0;
}

void Sort(float toSort[], int arrSize) {
  float minValue = 0, auxValue = 0;
  int minIndex = 0;

  for (int i = 0; i < arrSize; i++) {
    minValue = toSort[i], minIndex = i;
    for (int j = i + 1; j < arrSize; j++) {
      if (toSort[j] < minValue) {
        minValue = toSort[j];
        minIndex = j;
      }
    }
    auxValue = toSort[i];
    toSort[i] = minValue;
    toSort[minIndex] = auxValue;
  }
}
