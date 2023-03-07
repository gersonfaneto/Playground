#include <stdio.h>

int main(void) {
  int fNum = 0, sNum = 0, tNum = 0;

  scanf("%d %d %d", &fNum, &sNum, &tNum);

  if (fNum - sNum == 0) {
    printf("S\n");
  }
  else if (fNum - tNum == 0) {
    printf("S\n");
  }
  else if (sNum - tNum == 0) {
    printf("S\n");
  }
  else if (fNum + sNum - tNum == 0) {
    printf("S\n");
  }
  else if (fNum + tNum - sNum == 0) {
    printf("S\n");
  }
  else if (sNum + tNum - fNum == 0) {
    printf("S\n");
  }
  else {
    printf("N\n");
  }

  return 0;
}
