#include "../Algorithms/dijkstra/dijkstra.h"
#include <stdio.h>

int main(int argc, char** argv){
    printf("Tests started\n");

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

    /*
    addEdge(adjMatrix, 0, 2, 2);
    addEdge(adjMatrix, 0, 1, 3);
    addEdge(adjMatrix, 0, 6, 4);
    addEdge(adjMatrix, 1, 3, 3);
    addEdge(adjMatrix, 2, 3, 8);
    addEdge(adjMatrix, 3, 4, 4);
    addEdge(adjMatrix, 5, 8, 7);
    addEdge(adjMatrix, 0, 7, 4);
    addEdge(adjMatrix, 4, 7, 2);
    addEdge(adjMatrix, 4, 6, 8);
    addEdge(adjMatrix, 4, 5, 10);

    addEdge(adjMatrix, 2, 0, 2);
    addEdge(adjMatrix, 1, 0, 3);
    addEdge(adjMatrix, 6, 0, 4);
    addEdge(adjMatrix, 3, 1, 3);
    addEdge(adjMatrix, 3, 2, 8);
    addEdge(adjMatrix, 4, 3, 4);
    addEdge(adjMatrix, 8, 5, 7);
    addEdge(adjMatrix, 7, 0, 4);
    addEdge(adjMatrix, 7, 4, 2);
    addEdge(adjMatrix, 6, 4, 8);
    addEdge(adjMatrix, 5, 4, 10);
    */

    unsigned int *distArray = dijkstra(adjMatrix, 9, 0);

    /*
    for (int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; ++j) {
            printf("%u ", adjMatrix[i][j]);
        }
        printf("\n");
    }
    */

    for(int i = 0; i < 9; ++i) {
        printf("%u ", distArray[i]);
    }
}
