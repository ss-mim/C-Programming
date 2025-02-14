#include <stdio.h>

// Function to print elements of an array
void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};  // Declare and initialize an array
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate size of array

    // Pass the array to the function
    printArray(numbers, size);

    return 0;
}
