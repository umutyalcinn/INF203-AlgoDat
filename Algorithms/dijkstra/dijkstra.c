#include "dijkstra.h"

unsigned int *dijkstra(unsigned int **adjMatrix, int n, int start){

    unsigned int *distArray = initDistArray(start, n);
    
    // visited array
    char* visitedArray = (char*)malloc(sizeof(char) * n);
    for(int i = 0; i < n; ++i){
        visitedArray[i] = 0;
    }


    while(hasUnvisited(visitedArray, n)) {

        int curr = getClosestUnvisited(distArray, visitedArray, n);
        visitedArray[curr] = 1;

        for(int i = 0; i < n; ++i) {
            if(adjMatrix[curr][i] == 0xffffffff || visitedArray[i]) continue;

            unsigned int dist = distArray[curr] + adjMatrix[curr][i];
            if (dist < distArray[i]) {
                distArray[i] = dist;
            }

        }
    }

    return distArray;

    
}

char hasUnvisited(char* visitedArray, int n){
   for(int i = 0; i < n; ++i) {
       if(visitedArray[i] == 0){
           return 1;
       }
   }

   return 0;
}

int getClosestUnvisited(unsigned int *distArray, char *visitedArray, int n) {

    unsigned int shortestDistance = 0xffffffff;
    int idx = -1;
    for(int i = 0; i < n; ++i) {
        if(shortestDistance > distArray[i]) {
            if(visitedArray[i])
                continue;
            shortestDistance = distArray[i];
            idx = i;
        }
    }
    return idx;
}

unsigned int **initAdjMatrix(int n){
   unsigned int **adjMatrix = (unsigned int**)malloc(sizeof(unsigned int*) * n);

   int i, j;
   for(i = 0; i < n; ++i) {
       adjMatrix[i] = (unsigned int*)malloc(sizeof(unsigned int) * n);
       for (j = 0; j < n; j++) {
           adjMatrix[i][j] = 0xffffffff;
       }
   }

   return adjMatrix;
}

unsigned int *initDistArray(int start, int n) {

    unsigned int* distArray = (unsigned int*)malloc(sizeof(unsigned int) * n);

    int i;
    for(i = 0; i < n; ++i) {
        if(i == start) {
            distArray[i] = 0;
        }
        else{
            distArray[i] = 0xffffffff;
        }
    }

    return distArray;
}

void addEdge(unsigned int **adjMatrix, int start, int end, int weight) {
    adjMatrix[start, end] = weight;
}
