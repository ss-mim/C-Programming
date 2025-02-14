# Leap Year Checker

This is a simple C program that determines whether a given year is a leap year using `if-else` conditions.

## How It Works
- The user inputs a year (integer value).
- The program checks whether the year follows leap year conditions:
  - A year is a **leap year** if:
    - It is divisible by 4 **AND** not divisible by 100, **OR**
    - It is divisible by 400.
- The program prints whether the year is a leap year or not.


## Example Usage
```
Enter a year: 2024
2024 is a leap year.
```
```
Enter a year: 1900
1900 is not a leap year.
```
```
Enter a year: 2000
2000 is a leap year.
```

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`)

## Notes
- Ensure that you enter a valid integer year.
- This program follows the standard leap year calculation rules.

## License
This project is open-source and free to use.

