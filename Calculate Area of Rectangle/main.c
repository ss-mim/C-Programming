#include <stdio.h>

int main() {
    float length, width, area;  // Declare variables for length, width, and area

    // Prompt the user to enter the length of the rectangle
    printf("Enter Length: ");
    scanf("%f", &length);

    // Prompt the user to enter the width of the rectangle
    printf("Enter Width: ");
    scanf("%f", &width);

    area = length * width;  // Calculate the area of the rectangle

    // Display the calculated area with two decimal places
    printf("Area of the rectangle = %.2f\n", area);

    return 0;
}
