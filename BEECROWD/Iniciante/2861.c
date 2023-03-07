#include <stdio.h>

int main(void) {
  char pQuestion[100];
  int qIter = 0;

  scanf("%d", &qIter);

  for (int i = 0; i < qIter; i++) {
    scanf("%[^\n]%*c", pQuestion);
    printf("gzuz\n");
  }


  return 0; 
}
