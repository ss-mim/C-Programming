#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for invalid input (negative numbers)
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
