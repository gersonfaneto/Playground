#include <stdio.h>
#include <math.h>

int main(){

  float firstX, firstY, secondX, secondY;
  float finalDistance;

  scanf("%f %f", &firstX, &firstY);
  scanf("%f %f", &secondX, &secondY);

  finalDistance = sqrt(pow((secondX - firstX), 2) + pow((secondY - firstY), 2));

  printf("%.4f\n", finalDistance);

  return 0;
}
