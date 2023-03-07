#include <stdio.h>

int main(void) {
  int qntIter = 0;
  char inQuest[100];

  scanf("%d", &qntIter);

  for (int i = 0; i < qntIter; i++) {
    scanf("%*c");
    scanf("%[^\n]", inQuest);
    printf("I am Toorg!\n");
  }

  return 0;
}
