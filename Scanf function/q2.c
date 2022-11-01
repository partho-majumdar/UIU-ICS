#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter any two number to addition: ");
    scanf("%d %d", &a, &b);
    printf("Addition = %d \n", a + b);

    printf("Enter any two number to subtraction: ");
    scanf("%d %d", &a, &b);
    printf("Subtraction = %d \n", a - b);

    printf("Enter any two number to multiplication: ");
    scanf("%d %d", &a, &b);
    printf("Multiplication = %d \n", a * b);

    printf("Enter any two number to divide: ");
    scanf("%d %d", &a, &b);
    printf("Division = %d \n", a / b);

    printf("Enter any two number to remainder: ");
    scanf("%d %d", &a, &b);
    printf("Remainder = %d", a % b);
}