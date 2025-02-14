#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and reversed number are the same
    if (original == reversed) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is not a Palindrome number.\n", original);
    }

    return 0;
}
