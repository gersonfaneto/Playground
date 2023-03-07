#include <stdio.h>

int QntOriginal(int);

int main(void) {
  int qntCopies = 0;

  while (scanf("%d", &qntCopies) != EOF) {
    printf("%d\n", QntOriginal(qntCopies));
  }

  return 0;
}

int QntOriginal(int qntCopies) {
  int finalResutl = 0;

  while (qntCopies > 1) {
    qntCopies /= 2;
    finalResutl++;
  }

  return finalResutl;
}
