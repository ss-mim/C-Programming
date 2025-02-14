#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long for large factorial values

    // Input number from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using for loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}
