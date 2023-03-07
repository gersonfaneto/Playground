#include <stdio.h>

int main(void) {
  int qntVotes = 0;

  while (scanf("%d", &qntVotes) != EOF) {
    int inFavor = 0, inOpos = 0, currVote = 0;

    for (int i = 0; i < qntVotes; i++) {
      scanf("%d", &currVote);
      if (currVote == 1) {
        inFavor++;
      }
      else {
        inOpos++;
      }
    }

    if ((inFavor / (float) qntVotes) >= (2 / (float) 3)) {
      printf("impeachment\n");
    }
    else {
      printf("acusacao arquivada\n");
    }
  }

  return 0;
}
