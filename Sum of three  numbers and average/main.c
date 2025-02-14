#include <stdio.h>

int main() {
    int num1, num2, num3, sum;  // Declare variables for three numbers and their sum
    float avg;  // Declare variable for the average

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);  

    sum = num1 + num2 + num3;  // Calculate the sum
    printf("The sum of three numbers is: %d\n", sum);

    avg = (float)sum / 3;   // Convert sum to float before division to ensure correct decimal precision
    printf("The average of three numbers is: %.2f\n", avg);  // Display result with 2 decimal places

    return 0;
}
