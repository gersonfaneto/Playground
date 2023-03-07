#include <stdio.h>

int main(){

  int qntOper = 0;
  int doorState = 0, qntHours = 0, qntMinutes = 0;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++){
    scanf("%d %d %d", &qntHours, &qntMinutes, &doorState);
    printf("%02d:%02d - A porta ", qntHours, qntMinutes);
    (doorState == 1) ? printf("abriu!\n") : printf("fechou!\n");
    
  }

  return 0;
}
