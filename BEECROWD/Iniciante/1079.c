#include <stdio.h>

int main(){

  int qntScores;
  float firstScore, secondScore, thirdScore, finalScore;

  scanf("%d", &qntScores);

  for (int i = 1; i <= qntScores; i++) {
    scanf("%f", &firstScore);
    scanf("%f", &secondScore);
    scanf("%f", &thirdScore);
    
    finalScore = ((firstScore * 2) + (secondScore * 3) + (thirdScore * 5)) / 10;
    printf("%.1f\n", finalScore);
  }

  return 0;
}
