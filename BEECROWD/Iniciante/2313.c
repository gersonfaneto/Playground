#include <stdio.h>
#include <math.h>

void Sort(int[], int);

int main(void) {
  int fSide = 0, sSide = 0, tSide = 0;

  scanf("%d %d %d", &fSide, &sSide, &tSide);
  int newArr[] = {fSide, sSide, tSide};
  Sort(newArr, 3);

  if (fSide < sSide + tSide && sSide < fSide + tSide && tSide < fSide + sSide) {
    printf("Valido-");

    if (fSide == sSide && sSide == tSide) {
      printf("Equilatero\n");
    }
    else if ((fSide == sSide && sSide != tSide) || (sSide == tSide && tSide != fSide) || (tSide == fSide && fSide != sSide)) {
      printf("Isoceles\n");
    }
    else {
      printf("Escaleno\n");
    }

    if (pow(newArr[2], 2) == pow(newArr[0], 2) + pow(newArr[1], 2)) {
      printf("Retangulo: S\n");
    }
    else {
      printf("Retangulo: N\n");
    }
  }
  else {
    printf("Invalido\n");
  }

  return 0;
}

void Sort(int toSort[], int arrSize) {
  int minValue = 0, minIndex = 0, auxValue = 0;

  for (int i = 0; i < arrSize; i++) {
    minValue = toSort[i], minIndex = i;
    for (int j = i + 1; j < arrSize; j++) {
      if (toSort[j] < minValue) {
        minValue = toSort[j];
        minIndex = j;
      }
    }
    auxValue = toSort[i];
    toSort[i] = toSort[minIndex];
    toSort[minIndex] = auxValue;
  }
}
