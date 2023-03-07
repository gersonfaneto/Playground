#include <stdio.h>

int main(void) {
  double firstScore = 0, secondScore = 0, thirdScore = 0, fourthScore = 0, finalExam = 0;
  double finalResult = 0;

  scanf("%lf %lf %lf %lf", &firstScore, &secondScore, &thirdScore, &fourthScore);

  finalResult = ((firstScore * 2) + (secondScore * 3) + (thirdScore * 4) + (fourthScore * 1)) / 10;
  printf("Media: %.1lf\n", finalResult);

  if (finalResult >= 7) {
    printf("Aluno aprovado.\n");
  }
  else if (finalResult < 5) {
    printf("Aluno reprovado.\n");
  }
  else {
    printf("Aluno em exame.\n");
    scanf("%lf", &finalExam);
    finalResult = (finalResult + finalExam) / 2;
    printf("Nota do exame: %.1lf\n", finalExam);
    if (finalResult >= 5) {
      printf("Aluno aprovado.\n");
    }
    else {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n", finalResult);
  }


  return 0;
}
