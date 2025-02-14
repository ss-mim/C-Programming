#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to calculate sum using pointers
int sum(int *a, int *b) {
    return *a + *b;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display original values
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Swap numbers using pointers
    swap(&num1, &num2);

    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Calculate sum using pointers
    int result = sum(&num1, &num2);
    printf("\nSum of numbers: %d\n", result);

    return 0;
}
