#include <stdio.h>

void Sort(int[], int);

int main(void) {
  int qntNotes = 0, qntSearch = 0, tNum = 0;

  while (scanf("%d %d", &qntNotes, &qntSearch) != EOF) {
    int allGrades[qntNotes];
    
    for (int i = 0; i < qntNotes; i++) {
      scanf("%d", &allGrades[i]);
    }

    Sort(allGrades, qntNotes);

    for (int i = 0; i < qntSearch; i++) {
      scanf("%d", &tNum);
      printf("%d\n", allGrades[tNum - 1]);
    }
  }

  return 0;
}

void Sort(int toSort[], int arrSize) {
  int maxValue = 0, maxIndex = 0, auxValue = 0;

  for (int i = 0; i < arrSize; i++) {
    maxValue = toSort[i], maxIndex = i;
    for (int j = i + 1; j < arrSize; j++) {
      if (toSort[j] > maxValue) {
        maxValue = toSort[j];
        maxIndex = j;
      }
    }
    auxValue = toSort[i];
    toSort[i] = maxValue;
    toSort[maxIndex] = auxValue;
  }
}
