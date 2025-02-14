#include <stdio.h>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function and store the result
    result = sum(num1, num2);

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
