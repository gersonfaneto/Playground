#include <stdio.h>
#include <string.h>

char* ConvertRoman(int);

int main(void) {
  int allValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  int decValue = 0;

  scanf("%d", &decValue);

  for (int i = 0; i < (sizeof(allValues) / sizeof(allValues[0])); i++) {
    while (decValue >= allValues[i]) {
      printf("%s", ConvertRoman(allValues[i]));
      decValue -= allValues[i];
    }
  }
  printf("\n");

  return 0;
}

char* ConvertRoman(int decValue) {
  switch(decValue) {
    case 1000:
      return "M";
      break;
    case 900:
      return "CM";
      break;
    case 500:
      return "D";
      break;
    case 400:
      return "CD";
      break;
    case 100:
      return "C";
      break;
    case 90:
      return "XC";
      break;
    case 50:
      return "L";
      break;
    case 40:
      return "XL";
      break;
    case 10:
      return "X";
      break;
    case 9:
      return "IX";
      break;
    case 5:
      return "V";
      break;
    case 4:
      return "IV";
      break;
    default:
      return "I";
      break;
  }
}
