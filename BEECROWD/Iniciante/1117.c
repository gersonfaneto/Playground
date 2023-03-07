#include <stdio.h>

int main(void) {
  float currGrade = 0, finalResult = 0;
  int qntValid = 0;

  do {
    scanf("%f", &currGrade);

    if (currGrade < 0 || currGrade > 10) {
      printf("nota invalida\n");
    }
    else {
      finalResult += currGrade;
      qntValid++;
    }

  } while (qntValid < 2);


  printf("media = %.2f\n", (finalResult / 2));

  return 0;
}
