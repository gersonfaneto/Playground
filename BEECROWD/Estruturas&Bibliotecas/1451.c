#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000000

typedef struct Node {

  char nValue;
  struct Node* pNext;

} Node;

typedef struct LinkedList {

  Node* lHead;
  int lSize;

  void (*displayContent)(struct LinkedList*);
  void (*freeAll)(struct LinkedList*);
  void (*insertEnd)(struct LinkedList*, char);
  void (*insertBeginning)(struct LinkedList*, char);
  void (*insertMiddle)(struct LinkedList*, char, int);

} LinkedList;

LinkedList listInit(void);

int main(void) {

  char* userInput = (char*) malloc(MAX_SIZE * sizeof(char));
  char whereTo = ' ';
        
  while (fgets(userInput, MAX_SIZE, stdin) != NULL) {
    LinkedList userOutput = listInit();
    unsigned int inputSize = strnlen(userInput, MAX_SIZE) - 1;
    int insertIndex = 0;
    for (unsigned int i = 0; i < inputSize; i++) {
      if (userInput[i] == '[') {
        whereTo = '[';
        insertIndex = 0;
        continue;
      }
      else if (userInput[i] == ']') {
        whereTo = ']';
        continue;
      }
      if (whereTo == '[') {
        userOutput.insertMiddle(&userOutput, userInput[i], insertIndex);
        insertIndex++;
      }
      else {
        userOutput.insertEnd(&userOutput, userInput[i]);
      }
    }
    userOutput.displayContent(&userOutput);
  }

  return 0;
}

Node* createNode(char targetValue) {
  Node* newNode = (Node*) malloc(sizeof(Node));

  newNode -> nValue = targetValue;
  newNode -> pNext = NULL;

  return newNode;
}

void displayContent(LinkedList* toDiplay) {
  if (toDiplay -> lHead != NULL) {
    Node* listCursor = toDiplay -> lHead;
    while (listCursor -> pNext != NULL) {
      printf("%c", listCursor -> nValue);
      listCursor = listCursor -> pNext;
    }
    printf("%c\n", listCursor -> nValue);
  }
  else {
    printf("\n");
  }
}

void freeAll(LinkedList* listToFree) {
  if (listToFree -> lHead != NULL) {
    Node* listCursor = listToFree -> lHead;
    while (listCursor -> pNext != NULL) {
      Node* toDestroy = listCursor;
      listCursor = listCursor -> pNext;
      free(toDestroy);
    }
    free(listCursor);
    listToFree -> lHead = NULL;
    listToFree -> lSize = 0;
  }
}

void insertEnd(LinkedList* listToInsert, char targetValue) {
  Node* toInsert = createNode(targetValue);
  if (listToInsert -> lHead == NULL) {
    listToInsert -> lHead = toInsert;
  }
  else {
    Node* listCursor = listToInsert -> lHead;
    while (listCursor -> pNext != NULL) {
      listCursor = listCursor -> pNext;
    }
    listCursor -> pNext = toInsert;
  }
  listToInsert -> lSize++;
}

void insertBeginning(LinkedList* listToInsert, char targetValue) {
  Node* toInsert = createNode(targetValue);
  if (listToInsert -> lHead == NULL) {
    listToInsert -> lHead = toInsert;
  }
  else {
    toInsert -> pNext = listToInsert -> lHead;
    listToInsert -> lHead = toInsert;
  }
  listToInsert -> lSize++;
}

void insertMiddle(LinkedList* listToInsert, char targetValue, int listIndex) {
  if (listIndex < 0 || listIndex > (listToInsert -> lSize)) {
    printf("Error! List Index Out Of Range...\n");
    exit(1);
  }
  else if (listIndex == 0) {
    insertBeginning(listToInsert, targetValue);
    return;
  }
  else if (listIndex == listToInsert -> lSize) {
    insertEnd(listToInsert, targetValue);
    return;
  }
  else {
    Node* listCursor = listToInsert -> lHead;
    Node* toInsert = createNode(targetValue);
    for (int i = 0; i < (listIndex - 1); i++) {
      listCursor = listCursor -> pNext;
    }
    toInsert -> pNext = listCursor -> pNext;
    listCursor -> pNext = toInsert;
  }
  listToInsert -> lSize++;
}

LinkedList listInit(void) {
  LinkedList listInstance;

  listInstance.lHead = NULL;
  listInstance.lSize = 0;

  listInstance.displayContent = displayContent;
  listInstance.freeAll = freeAll;
  listInstance.insertEnd = insertEnd;
  listInstance.insertBeginning = insertBeginning;
  listInstance.insertMiddle = insertMiddle;

  return listInstance;
}

