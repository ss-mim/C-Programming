# Passing an Array to a Function in C

This is a **C program** that demonstrates how to **pass an array to a function** and print its elements.

## How It Works
- The program defines a function `printArray(int arr[], int size)` that takes an array and its size as parameters.
- Inside the function, a loop iterates through the array and prints each element.
- In the `main()` function:
  - An array `numbers[]` is declared and initialized with values `{10, 20, 30, 40, 50}`.
  - The size of the array is determined using `sizeof(numbers) / sizeof(numbers[0])`.
  - The array is passed to the `printArray()` function for printing.



## Example Usage
```
Array elements: 10 20 30 40 50 
```

## Features
- Demonstrates how to **pass an array to a function**.
- Uses `for` loop to iterate through the array elements.
- Uses `sizeof()` to calculate array size dynamically.

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`)

## Notes
- The function does not modify the array, but it can be adapted for other operations like modifying elements.
- Can be extended to accept user input for array values.

## License
This project is open-source and free to use.

