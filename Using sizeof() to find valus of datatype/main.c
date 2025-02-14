#include<stdio.h>

int main() {
    int i;
    float f;
    double d;
    char c;
    
    printf("Size of int = %zu bytes\n", sizeof(i)); // Size of 'int' type
    printf("Size of float = %zu bytes\n", sizeof(f)); // Size of 'float' type
    printf("Size of double = %zu bytes\n", sizeof(d)); // Size of 'double' type
    printf("Size of char = %zu bytes\n", sizeof(c)); // Size of 'char' type

    return 0;
}
