#include <stdio.h>

int main(){

  int coordX, coordY;

  do {
    scanf("%d %d", &coordX, &coordY);

    if (coordX > 0 && coordY > 0) {
      printf("primeiro\n");
    } else if (coordX > 0 && coordY < 0) {
      printf("quarto\n");
    } else if (coordX < 0 && coordY > 0) {
      printf("segundo\n");
    } else if (coordX < 0 && coordY < 0){
      printf("terceiro\n");
    }
  } while (coordX != 0 && coordY != 0);

  return 0;
}
