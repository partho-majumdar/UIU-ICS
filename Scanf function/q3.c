#include <stdio.h>

void main()
{
    float a, b;

    printf("Enter any two number to addition: ");
    scanf("%f %f", &a, &b);
    printf("Addition = %.3f \n", a + b);

    printf("Enter any two number to subtraction: ");
    scanf("%f %f", &a, &b);
    printf("Subtraction = %.3f \n", a - b);

    printf("Enter any two number to multiplication: ");
    scanf("%f %f", &a, &b);
    printf("Multiplication = %.6f \n", a * b);

    printf("Enter any two number to divide: ");
    scanf("%f %f", &a, &b);
    printf("Division = %.6f", a / b);
}