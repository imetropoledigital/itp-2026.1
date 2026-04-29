#include <stdio.h>

int main() {
    int linA = 2, colA = 3, linB = 3, colB = 2; // Exemplo 2x3 e 3x2
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{0, 1}, {1, 0}, {0, 1}};
    int C[2][2] = {0}; // Matriz resultante zerada

    for(int i = 0; i < linA; i++){
        for(int j = 0; j < colB; j++){
            for(int k = 0; k < colA; k++){
                C[i][j] += A[i][k] * B[k][j];
            }

            // C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j]; 

        }
    }

    for(int i = 0; i < linA; i++){
        for(int j = 0; j < colB; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}