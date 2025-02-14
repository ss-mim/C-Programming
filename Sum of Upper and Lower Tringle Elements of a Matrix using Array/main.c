#include <stdio.h>

int main() {
    int n, i, j;
    
    // Input size of square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int upperSum = 0, lowerSum = 0;

    // Calculate sums of upper and lower triangle elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j) { // Upper triangle
                upperSum += matrix[i][j];
            }
            if (i >= j) { // Lower triangle
                lowerSum += matrix[i][j];
            }
        }
    }

    // Display the results
    printf("Sum of Upper Triangle elements: %d\n", upperSum);
    printf("Sum of Lower Triangle elements: %d\n", lowerSum);

    return 0;
}
