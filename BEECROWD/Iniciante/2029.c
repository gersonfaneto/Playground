#include <stdio.h>

int main() {

  const float PI = 3.14;
  float honeyVolume, contDiameter;
  float contHeight, contArea;

  while (scanf("%f %f", &honeyVolume, &contDiameter) != EOF) {
    float containerRadius = contDiameter / 2;

    contHeight = (honeyVolume / (PI * (containerRadius * containerRadius)));
    contArea = PI * (containerRadius * containerRadius);

    printf("ALTURA = %.2f\n", contHeight);
    printf("AREA = %.2f\n", contArea);
  }

  return 0;
}
