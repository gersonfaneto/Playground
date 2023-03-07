#include <stdio.h>

int main(void) {
  int qntGrades = 0;

  while(scanf("%d", &qntGrades) != EOF) {
    int Grades[qntGrades], TimeSpent[qntGrades];
    int upperResult = 0, bottomResult = 0;

    for (int i = 0; i < qntGrades; i++) {
      scanf("%d %d", &Grades[i], &TimeSpent[i]);
    }

    for (int i = 0; i < qntGrades; i++) {
      upperResult += (Grades[i] * TimeSpent[i]);
      bottomResult += TimeSpent[i];
    }
    bottomResult *= 100;

    printf("%.4f\n", (upperResult / (float) bottomResult));
  }

  return 0;
}
