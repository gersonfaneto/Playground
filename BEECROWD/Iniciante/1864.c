#include <stdio.h>
#include <string.h>

#define FINAL_STRING "LIFE IS NOT A PROBLEM TO BE SOLVED"

int main(void) {
  int outSize = 0;

  scanf("%d", &outSize);

  for (int i = 0; i < outSize; i++) {
    printf("%c", FINAL_STRING[i]);
  }
  printf("\n");
  
  return 0;
}


