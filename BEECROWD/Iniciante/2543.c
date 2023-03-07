#include <stdio.h>

int main(void) {
  int qntVideos = 0, videoID = 0;

  while (scanf("%d %d", &qntVideos, &videoID) != EOF) {
    int currID = 0, isCS = 0, totalVideos = 0;

    for (int i = 0; i < qntVideos; i++) {
      scanf("%d %d", &currID, &isCS);
      if (currID == videoID && isCS == 0) {
        totalVideos++;
      }
    }

    printf("%d\n", totalVideos);
  }

  return 0;
}
