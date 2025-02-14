#include <stdio.h>

int main() {
    int n, i;

    // Input the number of terms
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    int fib[n]; // Declare an array to store Fibonacci numbers

    // Initializing first two terms
    fib[0] = 0;
    fib[1] = 1;

    // Generate Fibonacci sequence
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print Fibonacci sequence
    printf("Fibonacci Sequence: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}
