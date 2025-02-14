#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Negative numbers are not supported.\n");
    } else {
        // Reverse the number
        while (num != 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }
        printf("Reversed number: %d\n", reversed);
    }

    return 0;
}
