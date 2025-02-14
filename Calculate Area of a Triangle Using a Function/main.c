#include <stdio.h>

// Function to calculate the area of a triangle
float calculateArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height, area;

    // Input base and height
    printf("Enter base of the triangle: ");
    scanf("%f", &base);

    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    // Call function to compute area
    area = calculateArea(base, height);

    // Display the result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
