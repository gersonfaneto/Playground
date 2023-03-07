#include <stdio.h>
#include <stdlib.h>

int ToBinary(long long int, int*);

int main(void) {
  int qntCases = 0;
  
  scanf("%d", &qntCases);

  for (int i = 0; i < qntCases; i++) {
    int* tBin = (int*) malloc(1000 * sizeof(int)), binSize = 0;
    long long int currNum = 0, qntLamps = 0, maxLamps = 0;
    
    scanf("%d", &currNum);

    binSize = ToBinary(currNum, tBin);

    for (int i = 0; i < binSize; i++) {
      if (tBin[i] == 1) {
        qntLamps++;
      }
      else {
        qntLamps = 0;
      }
      if (qntLamps > maxLamps) {
        maxLamps = qntLamps;
      }
    }

    printf("%d\n", maxLamps);
    
    free(tBin);
  }
  
  return 0;
}

int ToBinary(long long int tNum, int* tBin) {
  int currIndex = 0;

  while (tNum > 0) {
    tBin[currIndex] = tNum % 2;
    currIndex++;
    tNum /= 2;
  }

  return currIndex;
}

