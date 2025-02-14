#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Compare the numbers using if-else
    if (num1 > num2) {
        printf("The larger number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The larger number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
