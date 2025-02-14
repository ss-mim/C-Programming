#include <stdio.h>

int main() {
    int n, i, min, max;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max with the first element
    min = max = arr[0];

    // Find min and max
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Display results
    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);

    return 0;
}
