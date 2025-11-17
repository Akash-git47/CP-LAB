//c program for swapping of two numbers
#include <stdio.h>
int main() {
    float num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping:\n");
    printf("First number: %.2f\n", num1);
    printf("Second number: %.2f\n", num2);

    return 0;
}