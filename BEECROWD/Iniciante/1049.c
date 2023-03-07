#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char* FClass = (char*) malloc(sizeof(char) * 50);
  char* SClass = (char*) malloc(sizeof(char) * 50);
  char* TClass = (char*) malloc(sizeof(char) * 50);

  scanf("%[^\n]%*c", FClass);
  scanf("%[^\n]%*c", SClass);
  scanf("%[^\n]%*c", TClass);

  if (strcmp(FClass, "vertebrado") == 0) {
    if (strcmp(SClass, "ave") == 0) {
      if (strcmp(TClass, "carnivoro") == 0) {
        printf("aguia\n");
      }
      else {
        printf("pomba\n");
      }
    }
    else {
      if (strcmp(SClass, "mamifero") == 0) {
        if (strcmp(TClass, "onivoro") == 0) {
          printf("homem\n");
        }
        else {
          printf("vaca\n");
        }
      }
    }
  }
  else {
    if (strcmp(SClass, "inseto") == 0) {
      if (strcmp(TClass, "hematofago") == 0) {
        printf("pulga\n");
      }
      else {
        printf("lagarta\n");
      }
    }
    else {
      if (strcmp(TClass, "hematofago") == 0) {
        printf("sanguessuga\n");
      }
      else {
        printf("minhoca\n");
      }
    }
  }

  return 0;
}
