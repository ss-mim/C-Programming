#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];  
    int len, i;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str); // Find length of the string

    // Reverse the string
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0'; // Null-terminate the reversed string

    // Compare original and reversed string
    if (strcmp(str, rev) == 0) {
        printf("The string is a Palindrome.\n");
    } else {
        printf("The string is NOT a Palindrome.\n");
    }

    return 0;
}
