#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    // Input dimensions for the first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Input dimensions for the second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible! Column of first matrix must be equal to row of second matrix.\n");
        return 1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    // Input first matrix elements
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix elements
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("\nResultant Matrix after multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
