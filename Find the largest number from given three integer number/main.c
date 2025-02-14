#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare numbers using if-else
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}
