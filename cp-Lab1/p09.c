//C Program to Compute Student Grade based on total marks and display result (Pass/Fail).
#include <stdio.h>

int main() {
    int marks;

    printf("Enter your total marks (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 90)
        printf("Grade: A+ (Excellent)\nPass\n");
    else if (marks >= 75)
        printf("Grade: A (Very Good)\nPass\n");
    else if (marks >= 60)
        printf("Grade: B (Good)\nPass\n");
    else if (marks >= 50)
        printf("Grade: C (Average)\nPass\n");
    else if (marks >= 35)
        printf("Grade: D (Just Passed)\nPass\n");
    else
        printf("Grade: F (Fail)\nFail\n");

    return 0;
}
