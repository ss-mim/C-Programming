#include<stdio.h>
int main(){
    int num1, num2, sum;  // Declare variables for two numbers and their sum
    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    sum = num1+num2; // Calculate the sum

    printf("The sum of two number is: %d\n", sum);
    return 0;
}