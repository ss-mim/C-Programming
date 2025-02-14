#include<stdio.h>

int main(){
    
    int n;  // Declare an integer variable to store the ASCII value

    // Prompt the user to enter an ASCII value
    printf("Enter any ASCII value: "); //ASCII value starts from 65
    
    // Read the input from the user and store it in the variable 'n'
    scanf("%d", &n);
    
    // Print the corresponding ASCII character using the '%c' format specifier
    // This will convert the integer 'n' to the corresponding character
    printf("The ASCII character is : %c", n);
    
    return 0; 
}
