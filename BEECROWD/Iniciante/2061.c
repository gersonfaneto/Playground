#include <stdio.h>

int main(){

  int qntOper = 0, qntTabs = 0;
  char operType[10];

  scanf("%d %d", &qntTabs, &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%s", operType);
    if (operType[0] == 'f') {
      qntTabs++;
    } else {
      qntTabs--;
    }
  }

  printf("%d\n", qntTabs);

  return 0;
}
