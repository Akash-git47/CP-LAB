//increment / decrement operators in c
#include <stdio.h>
int main() {
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Initial values: a = %d, b = %d\n", a, b);

    // Using increment and decrement operators
    printf("Using increment and decrement operators:\n");
    printf("Post-increment a: %d\n", a++); // prints a, then increments
    printf("Pre-increment b: %d\n", ++b);  // increments b, then prints

    printf("Values after operations: a = %d, b = %d\n", a, b);

    return 0;
}