#include <stdio.h>

int main() {
    int original[5], copy[5];

    // Input 5 numbers for the original array
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &original[i]);
    }

    // Copy elements from original to copy array
    for (int i = 0; i < 5; i++) {
        copy[i] = original[i];
    }

    // Display copied array
    printf("Copied array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", copy[i]);
    }
    printf("\n");

    return 0;
}
