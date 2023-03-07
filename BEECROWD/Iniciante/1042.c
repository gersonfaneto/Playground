#include <stdio.h>

void displayContent(int[], int);
void BubbleSort(int[], int);
void CopyArr(int[], int[], int);

int main(void) {
  int InOrder[3], OutOrder[3];

  scanf("%d%d%d", &InOrder[0], &InOrder[1], &InOrder[2]);

  CopyArr(InOrder, OutOrder, 3);

  BubbleSort(OutOrder, 3);

  displayContent(OutOrder, 3);
  printf("\n");
  displayContent(InOrder, 3);

  return 0;
}

void displayContent(int toDisplay[], int arrSize) {
  for (int i = 0; i < arrSize; i++) {
    printf("%d\n", toDisplay[i]);
  }
}

void BubbleSort(int toSort[], int arrSize) {
  int auxValue = 0;

  for (int i = 0; i < arrSize; i++) {
    for (int j = 0; j < (arrSize - 1); j++) {
      if (toSort[j] > toSort[j + 1]) {
        auxValue = toSort[j];
        toSort[j] = toSort[j + 1];
        toSort[j + 1] = auxValue;
      }
    }
  }
}

void CopyArr(int Source[], int Destiny[], int arrSize) {
  for (int i = 0; i < arrSize; i++) {
    Destiny[i] = Source[i];
  }
}
