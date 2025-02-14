# Reversed Number in C

This is a **C program** that reverses an integer using **if-else statements**.

## How It Works
- The user enters an **integer**.
- The program checks if the number is **negative** (optional handling for negatives).
- The program extracts digits from the number using `%` (modulus) and reverses them.
- The reversed number is displayed.


## Example Usage
```
Enter an integer: 1234
Reversed number: 4321
```
```
Enter an integer: -567
Negative numbers are not supported.
```

## Features
- Reverses a **positive integer**.
- Handles **negative numbers** with an error message.
- Uses a loop and modulus (`%`) for digit extraction.

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`)

## Notes
- The program **only supports positive integers**.
- The logic works by extracting each digit and appending it to the reversed number.

## License
This project is open-source and free to use.

