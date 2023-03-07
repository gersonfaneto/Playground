#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1000

typedef struct Node {

  int nValue;
  struct Node* pNext;

} Node;

typedef struct Stack {

  Node* sHead;
  int sSize;

  void (*displayContent)(struct Stack*);
  void (*freeAll)(struct Stack*);
  void (*insertElement)(struct Stack*, int);
  int (*removeElement)(struct Stack*);
  int (*peekFirst)(struct Stack*);

} Stack;

Stack Contructor(void);

int main(void) {
  char* possibleOut = (char*) malloc(MAX_SIZE * sizeof(char));
  Stack trainsIn = Contructor();
  Stack trainsOut = Contructor();
  int qntTrains = 0;
  
  scanf("%d%*c", &qntTrains);

  while (qntTrains > 0) {
    for (int i = 1; i <= qntTrains; i++) {
      trainsIn.insertElement(&trainsIn, i);
    }

    fgets(possibleOut, MAX_SIZE, stdin);  
    char* isNum = strtok(possibleOut, " ");
    while (isNum != NULL) {
      if (isdigit(isNum) == 0) {
        trainsOut.insertElement(&trainsIn, isNum);
      }
    }

  }

  trainsIn.displayContent(&trainsIn);

  return 0;
}

void displayContent(Stack* targetStack) {
  Node* linkCursor = targetStack -> sHead;

  if (linkCursor == NULL) {
    printf("[]\n");
  }
  else {
    printf("[");
    while (linkCursor -> pNext != NULL) {
      printf("%d, ", linkCursor -> nValue);
      linkCursor = linkCursor -> pNext;
    }
    printf("%d]\n", linkCursor -> nValue);
  }
}

void freeAll(Stack* targetStack) {
  Node* linkCursor = targetStack -> sHead;

  while (linkCursor -> pNext != NULL) {
    Node* toRemove = linkCursor;
    linkCursor = toRemove -> pNext;
    free(toRemove);
  }

  free(linkCursor);
}

Node* createNode(int targetValue) {
  Node* newNode = (Node*) malloc(sizeof(Node));

  if (newNode == NULL) {
    exit(1);
  }

  newNode -> nValue = targetValue;
  newNode -> pNext = NULL;

  return newNode;
}

void insertElement(Stack* targetStack, int targetValue) {
  Node* toInsert = createNode(targetValue);

  toInsert -> pNext = targetStack -> sHead;
  targetStack -> sHead = toInsert;

  targetStack -> sSize++;
}

int removeElement(Stack* targetStack) {
  int removedValue = 0;

  if (targetStack -> sHead == NULL) {
    exit(2);
  }
  else {
    Node* toRemove = targetStack -> sHead;
    removedValue = toRemove -> nValue;
    targetStack -> sHead = toRemove -> pNext;
    free(toRemove);
  }

  targetStack -> sSize--;

  return removedValue;
}

int peekFirst(Stack* targetStack) {
  int topValue = 0;

  if (targetStack -> sHead == NULL) {
    exit(3);
  }
  else {
    topValue = targetStack -> sHead -> nValue;
  }
  
  return topValue;
}

Stack Contructor(void) {
  Stack Instance;

  Instance.sHead = NULL;
  Instance.sSize = 0;

  Instance.displayContent = displayContent;
  Instance.freeAll = freeAll;
  Instance.insertElement = insertElement;
  Instance.removeElement = removeElement;
  Instance.peekFirst = peekFirst;

  return Instance;
}
