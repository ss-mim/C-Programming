# Number Swapping Program

This is a simple C program that swaps two numbers **without using a temporary variable**.

## How It Works
- The program prompts the user to enter two numbers.
- It swaps their values using arithmetic operations.
- Finally, it prints the swapped values.

### **Swapping Logic:**
The program swaps two numbers using:
```
num1 = num1 - num2;
num2 = num1 + num2;
num1 = num2 - num1;
```

This avoids using extra memory for a temporary variable.



## Example Usage
```
Enter two numbers: 5 10
After swapping:
Num1 = 10
Num2 = 5
```

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`)

## Alternative Approach
Another method for swapping numbers without a temporary variable is using the XOR bitwise operator:
```c
num1 = num1 ^ num2;
num2 = num1 ^ num2;
num1 = num1 ^ num2;
```
This method avoids overflow issues.

## Notes
- Ensure that you enter valid numeric values.
- The arithmetic approach may cause issues if the numbers are too large (integer overflow).

## License
This project is open-source and free to use.

