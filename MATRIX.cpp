#include <stdio.h>

void strassenMultiply(int A[2][2], int B[2][2], int C[2][2]) {

}

void printMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    printf("Enter the elements of Matrix 1 (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of Matrix 2 (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    strassenMultiply(matrix1, matrix2, result);


    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("\nMatrix 2:\n");
    printMatrix(matrix2);

    printf("\nResult Matrix:\n");
    printMatrix(result);

    return 0;
}

