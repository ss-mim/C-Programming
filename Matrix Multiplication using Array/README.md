
# Matrix Multiplication in C

This is a **C program** that performs **matrix multiplication** using arrays.

## How It Works
- The user inputs the number of **rows and columns** for the matrices.
- The program asks for **two matrices** as input.
- It performs **matrix multiplication** based on the condition that the number of columns of the first matrix is equal to the number of rows of the second matrix.
- The result is displayed as the **new resultant matrix**.


## Example Usage
```
Enter rows and columns for first matrix: 2 3
Enter rows and columns for second matrix: 3 2
Enter elements of first matrix:
1 2 3
4 5 6
Enter elements of second matrix:
7 8
9 10
11 12

Resultant Matrix after multiplication:
58 64
139 154
```

## Features
- Uses **arrays** to store and manipulate matrices.
- Supports **user-defined matrix sizes**.
- Performs **matrix multiplication** based on valid matrix dimensions.

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`)

## Notes
- The program assumes that the **number of columns in the first matrix equals the number of rows in the second matrix** for multiplication to be possible.
- The output matrix is displayed in a **formatted manner**.
- Can be extended to include **matrix addition, subtraction, and other operations**.

## License
This project is open-source and free to use.
