#include <stdio.h> 

int main(void) {
  int totalValue = 0, inOne = 0, inTwo = 0, inFive = 0,
      inTen = 0, inTwenty = 0, inFifth = 0, inHundred = 0;

  scanf("%d", &totalValue);
  printf("%d\n", totalValue);
  
  inHundred = totalValue / 100;
  totalValue -= (inHundred * 100);

  inFifth = totalValue / 50;
  totalValue -= (inFifth * 50);

  inTwenty = totalValue / 20;
  totalValue -= (inTwenty * 20);

  inTen = totalValue / 10;
  totalValue -= (inTen * 10);

  inFive = totalValue / 5;
  totalValue -= (inFive * 5);

  inTwo = totalValue / 2;
  totalValue -= (inTwo * 2);

  inOne = totalValue;

  printf("%d nota(s) de R$ 100,00\n", inHundred);
  printf("%d nota(s) de R$ 50,00\n", inFifth);
  printf("%d nota(s) de R$ 20,00\n", inTwenty);
  printf("%d nota(s) de R$ 10,00\n", inTen);
  printf("%d nota(s) de R$ 5,00\n", inFive);
  printf("%d nota(s) de R$ 2,00\n", inTwo);
  printf("%d nota(s) de R$ 1,00\n", inOne);

  return 0;
}
