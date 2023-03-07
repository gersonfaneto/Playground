#include <stdio.h>

int main(void) { 
  double Average = 0, newNum = 0;
  int qntPos = 0;

  for (int i = 0; i < 6; i++) {
    scanf("%lf", &newNum);
    if (newNum >= 0) {
      qntPos++;
      Average += newNum;
    }
  }

  printf("%d valores positivos\n", qntPos);
  printf("%.1f\n", (Average / qntPos));

  return 0; 
}
