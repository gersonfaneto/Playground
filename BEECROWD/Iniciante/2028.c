#include <stdio.h>

int GetQntNums(int);

int main(void) {
  int qntOper = 1, tNum = 0;

  while (scanf("%d", &tNum) != EOF) {
    int qntNums = GetQntNums(tNum), qntIter = 0;

    printf("Caso %d: %d ", qntOper, qntNums);
    (qntNums > 1) ? printf("numeros\n") : printf("numero\n");

    for (int i = 0; i <= tNum; i++) {
      qntIter = i;
      if (i == 0) {
        (tNum == 0) ? printf("0") : printf("0 ");
      }
      else if (i == 1) {
        (tNum == 1) ? printf("1") : printf("1 ");
      }
      else {
        do {
          printf("%d ", i);
          qntIter--;
        } while (qntIter > 1);
        (i == tNum) ? printf("%d", i) : printf("%d ", i);
      }
    }

    printf("\n\n");
    qntOper++;
  }

  return 0;
}

int GetQntNums(int tNum) {
  int qntNums = 1, qntIter = 0;

  for (int i = 1; i <= tNum; i++) {
    qntIter = i;
    do {
      qntNums++;
      qntIter--;
    } while (qntIter > 0);
  }

  return qntNums;
}
