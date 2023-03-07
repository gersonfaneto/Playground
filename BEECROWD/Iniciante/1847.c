#include <stdio.h>

int main(void) {
  int fTemp = 0, sTemp = 0, tTemp = 0;

  scanf("%d %d %d", &fTemp, &sTemp, &tTemp);

  if (fTemp > sTemp) {
    if (tTemp > sTemp) {
      printf(":)\n");
    }
    else {
      if (sTemp - tTemp < fTemp - sTemp) {
        printf(":)\n");
      }
      else {
        printf(":(\n");
      }
    }
  }
  else if (fTemp < sTemp) {
    if (tTemp < sTemp) {
      printf(":(\n");
    }
    else {
      if (sTemp - tTemp > fTemp - sTemp) {
        printf(":(\n");
      }
      else {
        printf(":)\n");
      }
    }
  }
  else {
    if (tTemp > fTemp) {
      printf(":)\n");
    }
    else {
      printf(":(\n");
    }
  }

  return 0;
}
    
