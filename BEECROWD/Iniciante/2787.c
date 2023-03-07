#include <stdio.h>

int main(void) {
  int nLine = 0, nColumn = 0;

  scanf("%d\n%d", &nLine, &nColumn);

  if (nLine % 2 == 0) {
    if (nColumn % 2 == 0) {
      printf("1\n");
    }
    else {
      printf("0\n");
    }
  }
  else {
    if (nColumn % 2 == 0) {
      printf("0\n");
    }
    else {
      printf("1\n");
    }
  }
  
  return 0;
}
