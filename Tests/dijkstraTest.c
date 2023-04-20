#include "dijkstraTest.h"

unsigned int **testAdjMatrix() {
    
    unsigned int **adjMatrix = initAdjMatrix(9);

    adjMatrix[0][2] = 2;
    adjMatrix[0][1] = 5;
    adjMatrix[0][7] = 4;
    adjMatrix[1][0] = 5;
    adjMatrix[1][2] = 1;
    adjMatrix[1][3] = 3;
    adjMatrix[2][0] = 2;
    adjMatrix[2][1] = 1;
    adjMatrix[2][3] = 8;
    adjMatrix[3][1] = 3;
    adjMatrix[3][5] = 6;
    adjMatrix[3][4] = 4;
    adjMatrix[4][3] = 4;
    adjMatrix[4][5] = 10;
    adjMatrix[4][6] = 8;
    adjMatrix[4][7] = 2;
    adjMatrix[5][3] = 6;
    adjMatrix[5][4] = 10;
    adjMatrix[5][8] = 7;
    adjMatrix[6][4] = 8;
    adjMatrix[6][8] = 11;
    adjMatrix[7][0] = 4;
    adjMatrix[7][4] = 2;
    adjMatrix[8][5] = 7;
    adjMatrix[8][6] = 11;

    return adjMatrix;
}

void dijkstraTest1(){
    
    unsigned int **adjMatrix = testAdjMatrix();
    unsigned int *distArray = dijkstra(adjMatrix, 9, 0);

    unsigned int expected[9] = {0, 3, 2, 6, 6, 12, 14, 4, 19};
    assert(uIntArrayEqual(distArray, expected, 9));
}

void dijkstraTest2(){
    
    unsigned int **adjMatrix = testAdjMatrix();
    unsigned int *distArray = dijkstra(adjMatrix, 9, 4);

    unsigned int expected[9] = {6, 7, 8, 4, 0, 10, 8, 2, 17};
    assert(uIntArrayEqual(distArray, expected, 9));
}
