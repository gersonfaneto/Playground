#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

  int nValue;
  struct Node* pNext;

} Node;

typedef struct LinkedList {

  Node* lHead;
  int lSize;

  void (*displayContent)(struct LinkedList*);
  void (*freeAll)(struct LinkedList*);
  void (*insertEnd)(struct LinkedList*, int);
  void (*insertBeginning)(struct LinkedList*, int);
  void (*insertMiddle)(struct LinkedList*, int, int);
  int (*popEnd)(struct LinkedList*);
  int (*popBeginning)(struct LinkedList*);
  int (*popMiddle)(struct LinkedList*, int);

} LinkedList;

LinkedList listInit(void);

int main(void) {

  int qntCards = 0;

  scanf("%d", &qntCards);

  while (qntCards > 0) {
    LinkedList DiscardedCards = listInit();
    LinkedList RemainingCards = listInit();
  
    int removedCard = 0, baseCard = 0;

    for (int i = 1; i < qntCards + 1; i++) {
      RemainingCards.insertEnd(&RemainingCards, i);
    }

    while (RemainingCards.lSize >= 2) {
      removedCard = RemainingCards.popBeginning(&RemainingCards);
      baseCard = RemainingCards.popBeginning(&RemainingCards);

      DiscardedCards.insertEnd(&DiscardedCards, removedCard);
      RemainingCards.insertEnd(&RemainingCards, baseCard);
    }

    printf("Discarded cards: ");
    DiscardedCards.displayContent(&DiscardedCards);

    printf("\nRemaining card: ");
    RemainingCards.displayContent(&RemainingCards);
    printf("\n");

    scanf("%d", &qntCards);
  }

  return 0;
}

Node* createNode(int targetValue) {
  Node* newNode = (Node*) malloc(sizeof(Node));

  newNode -> nValue = targetValue;
  newNode -> pNext = NULL;

  return newNode;
}

void displayContent(LinkedList* toDiplay) {
  if (toDiplay -> lHead != NULL) {
    Node* listCursor = toDiplay -> lHead;
    while (listCursor -> pNext != NULL) {
      printf("%d, ", listCursor -> nValue);
      listCursor = listCursor -> pNext;
    }
    printf("%d", listCursor -> nValue);
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

void insertEnd(LinkedList* listToInsert, int targetValue) {
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

void insertBeginning(LinkedList* listToInsert, int targetValue) {
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

void insertMiddle(LinkedList* listToInsert, int targetValue, int listIndex) {
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

int popEnd(LinkedList* listToRemove) {
  int removedValue = -404;
  
  if (listToRemove -> lHead -> pNext == NULL) {
    Node* toRemove = listToRemove -> lHead;
    removedValue = toRemove -> nValue;

    listToRemove -> lHead = NULL;
    listToRemove -> lSize = 0;

    free(toRemove);
  }

  else if (listToRemove -> lHead != NULL) {    
    Node* listCursor = listToRemove -> lHead;
    while (listCursor -> pNext -> pNext != NULL) {
      listCursor = listCursor -> pNext;
    }
    Node* toRemove = listCursor -> pNext;
    removedValue = toRemove -> nValue;
    
    listCursor -> pNext = NULL;
    listToRemove -> lSize--;

    free(toRemove);
  }

  return removedValue;
}

int popBeginning(LinkedList* listToRemove) {
  int removedValue = -404;

  if (listToRemove -> lHead != NULL) {
    Node* toRemove = listToRemove -> lHead;
    removedValue = toRemove -> nValue;

    listToRemove -> lHead = listToRemove -> lHead -> pNext;
    listToRemove -> lSize--;

    free(toRemove);
  }

  return removedValue;
}

int popMiddle(LinkedList* listToRemove, int targetIndex) {
  int removedValue = -404;

  if (listToRemove -> lHead != NULL && targetIndex >= 0 && 
      targetIndex < listToRemove -> lSize) {
    if (targetIndex == 0) {
      removedValue = popBeginning(listToRemove);
    }
    else if (targetIndex == (listToRemove -> lSize - 1)) {
      removedValue = popEnd(listToRemove);
    }
    else {
      Node* listCursor = listToRemove -> lHead;
      for (int i = 0; i < targetIndex - 1; i++) {
        listCursor = listCursor -> pNext;
      }
      Node* toRemove = listCursor -> pNext;
      removedValue = toRemove -> nValue;

      listCursor -> pNext = listCursor -> pNext -> pNext;
      listToRemove -> lSize--;

      free(toRemove);
    }
  }

  return removedValue;
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
  listInstance.popEnd = popEnd;
  listInstance.popBeginning = popBeginning;
  listInstance.popMiddle = popMiddle;

  return listInstance;
}

