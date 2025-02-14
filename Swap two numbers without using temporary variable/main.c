#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swapping without using a temporary variable
    num1 = num1 - num2;  // Step 1: num1 now holds the difference
    num2 = num1 + num2;  // Step 2: num2 gets original num1 value
    num1 = num2 - num1;  // Step 3: num1 gets original num2 value

    // Print the swapped values
    printf("After swapping:\n");
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);

    return 0;
}
