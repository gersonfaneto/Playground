#include <stdio.h>
#include <string.h>

int main(void) {
  char currString[500];

  scanf("%[^\n]s", currString);

  if (strlen(currString) <= 140) {
    printf("TWEET\n");
  }
  else {
    printf("MUTE\n");
  }

  return 0;
}
