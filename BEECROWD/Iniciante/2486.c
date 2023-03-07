#include <stdio.h>
#include <string.h>

int main(void) {
  char foodNames[][50] = {"suco de laranja", "morango fresco", "mamao", "goiaba vermelha", "manga", "laranja", "brocolis"};
  int foodValues[] = {120, 85, 85, 70, 56, 50, 34};
  int qntIter = 0;

  while (scanf("%d", &qntIter) && qntIter != 0) {
    int totalConsume = 0;
    int foodQuant = 0;
    char foodName[50];
    for (int i = 0; i < qntIter; i++) {
      scanf("%d %[^\n]", &foodQuant, foodName);
      scanf("%*c");

      for (int j = 0; j < 7; j++) {
        if (strcmp(foodName, foodNames[j]) == 0) {
          totalConsume += (foodQuant * foodValues[j]);
        }
      }

    }
    if (totalConsume < 110) {
      printf("Mais %d mg\n", 110 - totalConsume);
    }
    else if (totalConsume > 130) {
      printf("Menos %d mg\n", totalConsume - 130);
    }
    else {
      printf("%d mg\n", totalConsume);
    }
  }

  return 0;
}
