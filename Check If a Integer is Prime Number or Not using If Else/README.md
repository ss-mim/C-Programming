# Prime Number Checker in C

This is a simple **C program** that checks whether a given number is **prime or not** using an **if-else** statement.

## How It Works
- The user enters a **positive integer**.
- The program checks if the number is **less than 2** (not prime).
- It then iterates from **2 to num/2** to check if the number is divisible by any value.
- If the number is only divisible by **1 and itself**, it is **prime**; otherwise, it is **not prime**.


## Example Usage
```
Enter a positive integer: 17
17 is a prime number.
```
```
Enter a positive integer: 12
12 is not a prime number.
```

## Features
- Checks if a number is **prime or not**.
- Handles numbers **less than 2** correctly.
- Uses an **efficient loop** to reduce unnecessary calculations.

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`)

## Notes
- A **prime number** is a number **greater than 1** that is only divisible by **1 and itself**.
- If a number is **divisible by any number other than 1 and itself**, it is **not prime**.
- The loop runs until **num/2** to optimize performance.

## License
This project is open-source and free to use.

