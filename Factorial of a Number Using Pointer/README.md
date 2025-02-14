# Factorial Calculation using Pointers in C

This is a **C program** that calculates the **factorial of a number** using **pointers**.

## How It Works
- The program defines a function:
  - `factorial(int *n, long long *result)`: Computes the factorial of a number using pointers.
- Inside the `main()` function:
  - The user inputs an integer.
  - The program checks if the number is negative and prints an error message if it is.
  - If the number is non-negative, the `factorial()` function is called.
  - The result is displayed.

## Example Output
```
Enter a positive integer: 5
Factorial of 5 is 120
```

## Features
- Demonstrates **how to use pointers** in C programming.
- Implements **function-based factorial calculation**.
- Uses **long long to store large factorial values**.

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`).

## Notes
- The program handles negative inputs by displaying an error message.
- Can be modified to compute factorial iteratively or recursively.

## License
This project is open-source and free to use.

