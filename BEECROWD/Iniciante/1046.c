/* Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do
 * jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo
 * uma duração mínima de 1 hora e máxima de 24 horas. */

#include <stdio.h>

int main(void) {
  int Start = 0, End = 0;

  scanf("%d%d", &Start, &End);

  if (Start == End) {
    printf("O JOGO DUROU 24 HORA(S)\n");
  }
  else if (Start > End) {
    printf("O JOGO DUROU %d HORA(S)\n", ((24 + End) - Start));
  }
  else {
    printf("O JOGO DUROU %d HORA(S)\n", End - Start);
  }

  return 0;
}
