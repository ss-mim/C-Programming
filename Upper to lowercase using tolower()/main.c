#include<stdio.h>
#include<ctype.h>
int main(){

    char upper, lower;

    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);

    lower = tolower(upper);
    printf("Lowercase letter = %c\n", lower);

    return 0;
}