#include "linkedList.h"
#include <stdio.h>

int main()
{
  struct LinkedList *linkedList = linkedList_init();

  int i;
  for (i = 0; i < 100; ++i)
  {
    linkedList_add(linkedList, i);
  }

  printf("%d\n", linkedList_indexof(linkedList, 57));

  linkedList_print(linkedList);
}