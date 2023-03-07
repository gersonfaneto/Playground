#include <stdio.h>

int main(void) {
  int tNum = 0, currNum = 1;

  scanf("%d", &tNum);

  for (int i = 0; i < tNum * 2; i++) {
    if (i % 2 == 0) {
      printf("%d %d %d\n", currNum, (currNum * currNum), (currNum * currNum * currNum));
    }
    else {
      printf("%d %d %d\n", currNum, (currNum * currNum) + 1, (currNum * currNum * currNum) + 1);
      currNum++;
    } 
  }


  return 0;
}
