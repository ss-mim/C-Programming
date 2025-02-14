# Fibonacci Sequence using Array in C

This is a **C program** that generates the Fibonacci sequence using an **array**.

## How It Works
- The user enters the **number of Fibonacci terms**.
- The program initializes the first two Fibonacci numbers (`0` and `1`).
- It then uses a **for loop** to compute the remaining Fibonacci numbers using the formula:
  
  `fib[i] = fib[i - 1] + fib[i - 2]`

- Finally, it prints the **Fibonacci sequence**.


## Example Usage
```
Enter the number of Fibonacci terms: 7
Fibonacci Sequence: 0 1 1 2 3 5 8
```

## Features
- Uses an **array** to store Fibonacci numbers.
- Efficient **O(n) time complexity**.
- Works for any **positive integer input**.

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`)

## Notes
- The array size depends on user input.
- The first two Fibonacci numbers are **predefined**.
- Can be modified to work with **larger numbers** using `long long int`.

## License
This project is open-source and free to use.

