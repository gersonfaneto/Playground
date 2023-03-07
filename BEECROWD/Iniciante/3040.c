#include <stdio.h>

int main(void) {
  int qIter = 0, tSize = 0, tThickness = 0, qBranchs = 0;

  scanf("%d", &qIter);

  while (qIter--) {
    scanf("%d %d %d", &tSize, &tThickness, &qBranchs);
    if (tSize >= 200 && tSize <= 300 && tThickness >= 50 && qBranchs >= 150) {
      printf("Sim\n");
    }
    else {
      printf("Nao\n");
    }
  }

  return 0;
}
