#include "linkedList.h"

struct LinkedList *linkedList_init()
{
  struct LinkedList *newLinkedList = (struct LinkedList *)malloc(sizeof(struct LinkedList));
  newLinkedList->head = NULL;
  newLinkedList->tail = NULL;
  newLinkedList->count = 0;

  return newLinkedList;
}

struct LinkedListNode *linkedListNode_init(int val)
{
  struct LinkedListNode *newLinkedListNode = (struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
  newLinkedListNode->val = val;
  newLinkedListNode->next = NULL;
  return newLinkedListNode;
}

void linkedList_add(struct LinkedList *linkedList, int n)
{
  struct LinkedListNode *newLinkedListNode = linkedListNode_init(n);

  if (linkedList->count == 0)
  {
    linkedList->head = newLinkedListNode;
    linkedList->tail = newLinkedListNode;
  }

  else
  {
    linkedList->tail->next = newLinkedListNode;
    linkedList->tail = newLinkedListNode;
  }

  linkedList->count++;
}

void linkedList_print(struct LinkedList *linkedList)
{
  struct LinkedListNode *node = linkedList->head;

  while (node != NULL)
  {
    printf("%d\n", node->val);
    node = node->next;
  }
}

int linkedList_remove(struct LinkedList *linkedList, int n)
{

  if (linkedList == NULL)
  {
    return -1;
  }

  if (linkedList->head->val == n)
  {
    linkedList->head = linkedList->head->next;
    return 0;
  }

  int i = 1;
  struct LinkedListNode *prev = linkedList->head;

  while (prev->next != NULL)
  {
    if (prev->next->val == n)
    {
      prev->next = prev->next->next;
      return i;
    }

    prev = prev->next;
    ++i;
  }
}

int linkedList_indexof(struct LinkedList *linkedList, int n)
{
  struct LinkedListNode *ptr = linkedList->head;
  int i = 0;
  while (ptr != NULL)
  {
    if (ptr->val == n)
      return i;

    ptr = ptr->next;
    ++i;
  }

  return -1;
}