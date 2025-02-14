#include <stdio.h>

int main() {
    int numbers[5], sum = 0;
    float average;

    // Input 5 numbers from the user
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Calculate sum
    }

    average = (float)sum / 5; // Calculate average

    // Print results
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
