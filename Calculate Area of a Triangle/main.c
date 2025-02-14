#include <stdio.h>

int main() {
    float base, height, area;  // Declare variables for base, height, and area

    // Prompt the user to enter the base of the triangle
    printf("Enter Base = ");
    scanf("%f", &base);

    // Prompt the user to enter the height of the triangle
    printf("Enter Height = ");
    scanf("%f", &height);

    area = 0.5 * base * height;  // Calculate the area of the triangle

    // Display the calculated area with two decimal places
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
