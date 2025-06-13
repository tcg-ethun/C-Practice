
//Addition of two Square Matrix 

#include <stdio.h>

int main() {
    int matrixA[2][2] = { {1, 2}, {3, 4} };
    int matrixB[2][2] = { {4, 3}, {2, 1} };

    matrixA[0][0] = matrixA[0][0] + matrixB[0][0];
    matrixA[0][1] = matrixA[0][1] + matrixB[0][1];
    matrixA[1][0] = matrixA[1][0] + matrixB[1][0];
    matrixA[1][1] = matrixA[1][1] + matrixB[1][1];
    printf("Resultant matrixA after addition:\n");
    printf("%d %d\n", matrixA[0][0], matrixA[0][1]);
    printf("%d %d\n", matrixA[1][0], matrixA[1][1]);

    return 0;
}