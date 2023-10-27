#include <stdio.h>
#include <stdlib.h>

int main() {
    int A_rows, A_cols, B_rows, B_cols;

    // Prompt the user to enter the dimensions of matrix A
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &A_rows, &A_cols);

    // Prompt the user to enter the dimensions of matrix B
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &B_rows, &B_cols);

    // Check if matrix multiplication is possible
    if (A_cols != B_rows) {
        printf("Matrix multiplication is not possible. A_cols must be equal to B_rows.\n");
        return 1;
    }

    // Dynamic memory allocation for matrix A
    int** A = (int**)malloc(A_rows * sizeof(int*));
    for (int i = 0; i < A_rows; i++) {
        A[i] = (int*)malloc(A_cols * sizeof(int));
    }

    // Dynamic memory allocation for matrix B
    int** B = (int**)malloc(B_rows * sizeof(int*));
    for (int i = 0; i < B_rows; i++) {
        B[i] = (int*)malloc(B_cols * sizeof(int));
    }

    // Dynamic memory allocation for the result matrix C
    int** C = (int**)malloc(A_rows * sizeof(int*));
    for (int i = 0; i < A_rows; i++) {
        C[i] = (int*)malloc(B_cols * sizeof(int));
    }

    // Prompt the user to enter elements for matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < A_rows; i++) {
        for (int j = 0; j < A_cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Prompt the user to enter elements for matrix B
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < B_rows; i++) {
        for (int j = 0; j < B_cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < A_rows; i++) {
        for (int j = 0; j < B_cols; j++) {
            C[i][j] = 0;
            for (int k = 0; k < A_cols; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result matrix C
    printf("Matrix A x B:\n");
    for (int i = 0; i < A_rows; i++) {
        for (int j = 0; j < B_cols; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    // Deallocate memory for matrices A, B, and C
    for (int i = 0; i < A_rows; i++) {
        free(A[i]);
    }
    free(A);

    for (int i = 0; i < B_rows; i++) {
        free(B[i]);
    }
    free(B);

    for (int i = 0; i < A_rows; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}
