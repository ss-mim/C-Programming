#include <stdio.h>

// Function to calculate factorial using pointers
void factorial(int *n, long long *result) {
    *result = 1;
    for (int i = 1; i <= *n; i++) {
        *result *= i;
    }
}

int main() {
    int num;
    long long fact;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function
        factorial(&num, &fact);

        // Print the result
        printf("Factorial of %d is %lld\n", num, fact);
    }

    return 0;
}
