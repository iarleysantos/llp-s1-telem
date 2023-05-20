#include <stdio.h>

void print_matriz(int (*matrix)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void soma_matriz(int (*matrixA)[3], int (*matrixB)[3], int (*matrixC)[3], int rows) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 3; j++) {
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
}
int main() {
    int matrizA[3][3] = {{5, 6, 7}, {2, 0, 3}, {1, 5, 9}};
    int matrizB[3][3] = {{0, 4, 7}, {3, 4, 8}, {1, 6, 8}};
    int matrizC[3][3];
    soma_matriz(matrizA, matrizB, matrizC, 3);  
    printf ("A matriz de A vai ser: \n"); print_matriz(matrizA, 3); 
    printf ("A matriz de B vai ser: \n"); print_matriz(matrizB, 3); 
    printf ("A matriz de C é a soma entre as matrizes A e B, vai ser: \n"); print_matriz(matrizC, 3); 
    return 0;
}
