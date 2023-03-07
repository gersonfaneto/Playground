#include <stdio.h>
#include <string.h>

int main(void) {
  char userIn[500];

  scanf("%[^\n]s", userIn);

  if (strlen(userIn) > 80) {
    printf("NO\n");
  }
  else {
    printf("YES\n");
  }

  return 0;
}
