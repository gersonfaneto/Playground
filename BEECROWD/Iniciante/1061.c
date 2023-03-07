#include <stdio.h>

int main(void) {
  int sDay = 0, sHour = 0, sMin = 0, sSec = 0;
  int eDay = 0, eHour = 0, eMin = 0, eSec = 0;
  int tDay = 0, tHour = 0, tMin = 0, tSec = 0;

	
	scanf("Dia %d", &sDay);
	scanf("%d : %d : %d\n", &sHour, &sMin, &sSec);

	scanf("Dia %d", &eDay);
	scanf("%d : %d : %d", &eHour, &eMin, &eSec);
	
	tDay = eDay - sDay;
	tHour = eHour - sHour;
	tMin = eMin - sMin;
	tSec = eSec - sSec;

	if (tSec < 0) {
		tSec += 60;
		tMin -= 1;
	}
	
	if (tMin < 0) {
		tMin += 60;
		tHour -= 1;
	}

	if (tHour < 0) {
		tHour += 24;
		tDay -= 1;
	}

  printf("%d dia(s)\n", tDay);
  printf("%d hora(s)\n", tHour);
  printf("%d minuto(s)\n", tMin);
  printf("%d segundo(s)\n", tSec);

	return 0;
	
}
