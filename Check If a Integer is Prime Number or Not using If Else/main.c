#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for numbers less than 2
    if (num < 2) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
