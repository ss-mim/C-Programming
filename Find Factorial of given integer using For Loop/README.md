# Factorial Calculator (Using If-Else) in C

## **Description**
This **C program** calculates the **factorial** of a given positive integer using an **if-else** statement.
The factorial of a number `n` is the product of all positive integers from `1` to `n`.

## **How It Works**
1. The user inputs a **positive integer**.
2. The program checks if the input is **zero or negative**.
   - If **zero**, it returns `1` (`0! = 1`).
   - If **negative**, it prints an error message.
3. If the input is positive, the program calculates the factorial using a **for loop**.
4. The program displays the **factorial result**.

## **Factorial Formula**
\[
n! = n \times (n-1) \times (n-2) \times ... \times 1
\]
### **Example:**
\[
5! = 5 \times 4 \times 3 \times 2 \times 1 = 120
\]



## **Example Runs**
### **Example 1**
#### **Input:**
```
Enter a positive integer: 5
```
#### **Output:**
```
Factorial of 5 is: 120
```

### **Example 2**
#### **Input:**
```
Enter a positive integer: -3
```
#### **Output:**
```
Factorial is not defined for negative numbers.
```

### **Example 3**
#### **Input:**
```
Enter a positive integer: 0
```
#### **Output:**
```
Factorial of 0 is: 1
```

## **Header Files Used**
- `<stdio.h>` for input/output functions.

## **Notes**
- The program ensures **error handling** for negative inputs.
- Uses `unsigned long long` to store large factorial values.
- Factorial grows rapidly, so large numbers might exceed data type limits.

## **License**
This project is open-source and free to use.

