# Palindrome Check in C (Using Strings)

This is a **C program** to check whether a given string is a **palindrome** using **string manipulation**.

## How It Works
- The user inputs a string.
- The program removes any newline characters.
- It then reverses the string and stores it in another array.
- Finally, it compares the original and reversed strings to determine if they are the same.
- If they match, the string is a palindrome; otherwise, it is not.



## Example Usage
```
Enter a string: madam
The string is a Palindrome.
```
```
Enter a string: hello
The string is NOT a Palindrome.
```

## Features
- Uses **`fgets()`** to safely read input, avoiding buffer overflow.
- Removes newline characters to prevent unintended mismatches.
- Uses **`strcmp()`** for comparison and **`strrev()`** logic for reversal.

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`, `fgets`)
- `<string.h>` for string manipulation functions (`strlen`, `strcmp`)

## Notes
- The program is **case-sensitive** (e.g., `Madam` is not equal to `madam`).
- Can be extended to **ignore spaces and punctuation** for better accuracy.

## License
This project is open-source and free to use.

