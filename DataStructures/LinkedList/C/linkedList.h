#include <stdlib.h>
#include <stdio.h>

struct LinkedList
{
  struct LinkedListNode *head;
  struct LinkedListNode *tail;
  int count;
};

struct LinkedListNode
{
  int val;
  struct LinkedListNode *next;
};

struct LinkedList *linkedList_init();

struct LinkedListNode *linkedListNode_init(int val);

void linkedList_add(struct LinkedList *linkedList, int n);

void linkedList_print(struct LinkedList *linkedList);

int linkedList_remove(struct LinkedList *linkedList, int n);

int linkedList_exists(struct LinkedList *linkedList, int n);
