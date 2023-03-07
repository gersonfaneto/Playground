#include <stdio.h>

int main(void) {
  int qntOper = 0, studentID = 0, highestGradeID = 0;
  float studentGrade = 0, highestGrade = 0;

  scanf("%d", &qntOper);

  for (int i = 0; i < qntOper; i++) {
    scanf("%d %f", &studentID, &studentGrade);
    if (i == 0 || studentGrade > highestGrade) {
      highestGrade = studentGrade;
      highestGradeID = studentID;
    }
  }

  if (highestGrade >= 8) {
    printf("%d\n", highestGradeID);
  }
  else {
    printf("Minimum note not reached\n");
  }

  return 0;
}
