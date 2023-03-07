#include <stdio.h>
#include <math.h>

int main(void) {
  int Xf = 0, Yf = 0, Xi = 0, Yi = 0, Vi = 0, R1 = 0, R2 = 0;

  while(scanf("%d %d %d %d %d %d %d", &Xf, &Yf, &Xi, &Yi, &Vi, &R1, &R2) != EOF) { 
    double attackRange = R1 + R2;
    double enemieDist = (sqrt(pow(Xf - Xi, 2) + pow(Yf - Yi, 2))) + (1.5 * Vi);

    if (enemieDist <= attackRange) {
      printf("Y\n");
    }
    else {
      printf("N\n");
    }

  }

  return 0;
}
