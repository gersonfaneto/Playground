#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int Ca = 0, Cb = 0, Cc = 0;
  int Pa = 0, Pb = 0, Pc = 0;
  int totalLeft = 0;
  
  scanf("%d %d %d", &Ca, &Cb, &Cc);
  scanf("%d %d %d", &Pa, &Pb, &Pc);

  totalLeft += ((Pa > Ca) ? Pa - Ca : 0);
  totalLeft += ((Pb > Cb) ? Pb - Cb : 0);
  totalLeft += ((Pc > Cc) ? Pc - Cc : 0);

  printf("%d\n", totalLeft);

  return 0;
}
