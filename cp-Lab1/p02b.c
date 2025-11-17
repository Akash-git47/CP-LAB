//c program to input and display various data types
#include <stdio.h>
int main() {
    int intVar;
    float floatVar;
    char charVar;
    double doubleVar;

    printf("Enter an integer: ");
    scanf("%d", &intVar);

    printf("Enter a float: ");
    scanf("%f", &floatVar);

    printf("Enter a character: ");
    scanf(" %c", &charVar);

    printf("Enter a double: ");
    scanf("%lf", &doubleVar);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", intVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("Double: %.2lf\n", doubleVar);

    return 0;
}