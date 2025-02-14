# Student Grade Evaluator

This is a simple C program that determines a student's grade based on their score using `if-else` conditions.

## How It Works
- The user inputs a score (integer value).
- The program checks the score against predefined grade ranges.
- It prints the corresponding grade.

## Grading System
| Score Range | Grade |
|------------|-------|
| 80 and above | A+ |
| 75 - 79 | A |
| 70 - 74 | A- |
| 65 - 69 | B+ |
| 60 - 64 | B |
| 55 - 59 | B- |
| 50 - 54 | C+ |
| 45 - 49 | C |
| 40 - 44 | D |
| Below 40 | Fail |


## Example Usage
```
Enter the student's score: 82
Grade: A+
```
```
Enter the student's score: 67
Grade: B+
```
```
Enter the student's score: 38
Grade: Fail
```

## Header Files Used
- `<stdio.h>` for input/output functions (`printf`, `scanf`)

## Notes
- Ensure that you enter a valid integer score.
- The program follows standard grading criteria.

## License
This project is open-source and free to use.

