//nested if: positivity of two numbers
#include <stdio.h>
int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num1 > 0) {
        if (num2 > 0) {
            printf("Both numbers are positive.\n");
        } else {
            printf("The first number is positive, but the second number is not positive.\n");
        }
    } else {
        if (num2 > 0) {
            printf("The second number is positive, but the first number is not positive.\n");
        } else {
            printf("Neither number is positive.\n");
        }
    }

    return 0;
}