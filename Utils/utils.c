#include "utils.h"

char uIntMatrixEqual(unsigned int **a, unsigned int **b, int n, int k) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < k; ++j) {
            if(a[i][j] != b[i][j]) {
                return 0;
            }
        }
    }

    return 1;
}

char uIntArrayEqual(unsigned int *a, unsigned int *b, int n) {
    for(int i = 0; i < n; ++i) {
        if(a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

