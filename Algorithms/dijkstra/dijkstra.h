#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>

unsigned int *dijkstra(unsigned int **adjMatrix, int n, int start);
unsigned int **initAdjMatrix(int n);
unsigned int *initDistArray(int start, int n);
void addEdge(unsigned int **adjMatrix, int start, int end, int weigth);
char hasUnvisited(char* visitedArray, int n);
int getClosestUnvisited(unsigned int *distArray, char *visitedArray, int n);
