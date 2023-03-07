#include <stdio.h>

int main(){

  double firstScore, secondScore, thirdScore;
  double finalScore;

  scanf("%lf", &firstScore);
  scanf("%lf", &secondScore);
  scanf("%lf", &thirdScore);

  finalScore = ((firstScore * 2) + (secondScore * 3) + (thirdScore * 5)) / 10;

  printf("MEDIA = %.1lf\n", finalScore);

  return 0;
}
