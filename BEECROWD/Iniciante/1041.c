#include <stdio.h>

int main(void) {
  double CoordX = 0, CoordY = 0;

  scanf("%lf%lf", &CoordX, &CoordY);

  if (CoordX == 0 && CoordY == 0) {
    printf("Origem\n");
  }
  else if (CoordX == 0) {
    printf("Eixo Y\n");
  }
  else if (CoordY == 0) { 
    printf("Eixo X\n");
  }
  else if (CoordX > 0 && CoordY > 0) {
    printf("Q1\n");
  }
  else if (CoordX < 0 && CoordY > 0) {
    printf("Q2\n");
  }
  else if (CoordX < 0 && CoordY < 0) {
    printf("Q3\n");
  }
  else {
    printf("Q4\n");
  }

  return 0;
}
