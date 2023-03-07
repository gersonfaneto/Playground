#include <stdio.h>

int main(void) {
  int tNum;

  while (scanf("%d", &tNum) != EOF) {
    if (tNum == 0) {
      printf("vai ter copa!\n");
    }
    else {
      printf("vai ter duas!\n");
    }
  }

  return 0;
}
