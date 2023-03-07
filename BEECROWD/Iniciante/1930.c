#include <stdio.h>

int main() {

  int qntPlugs, tempVar;

  for (int i = 0; i < 4; i++) {
    scanf("%d", &tempVar);
    if (i != 3) {
      qntPlugs += (tempVar - 1);
    } else {
      qntPlugs += tempVar;
    }
  }

  printf("%d\n", qntPlugs);

  return 0;
}
