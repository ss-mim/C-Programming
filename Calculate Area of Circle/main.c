#include <stdio.h>

#define PI 3.1416  // Define a constant for PI

int main() {
    float radius, area;  // Declare variables for radius and area

    // Prompt the user to enter the radius of the circle
    printf("Enter Radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;  // Calculate the area of the circle

    // Display the calculated area with two decimal places
    printf("Area of the circle = %.2f\n", area);

    return 0;
}
