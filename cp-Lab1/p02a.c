//c program to display different data types
#include <stdio.h>
int main() {
    int intVar = 10;
    float floatVar = 5.5;
    char charVar = 'A';
    double doubleVar = 20.99;

    printf("Integer: %d\n", intVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("Double: %.2lf\n", doubleVar);

    return 0;
}