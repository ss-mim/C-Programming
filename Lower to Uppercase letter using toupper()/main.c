#include<stdio.h>
#include<ctype.h> // ctype.h for toupper()
int main(){

    char lower, upper;
    printf("Enter any lowercase letter:  ");
    scanf("%c", &lower);

    upper= toupper(lower); //toupper() use to conver lowercase to uppercase
    printf("Uppercase letter: %c\n", upper);

    return 0;

}