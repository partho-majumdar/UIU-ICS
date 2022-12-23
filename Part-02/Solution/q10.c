#include <stdio.h>

void main()
{
    float number1, number2;
    char operator;

    printf("Enter any operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%f", &number1);

    printf("Enter second number: ");
    scanf("%f", &number2);

    if (operator== '+')
    {
        printf("Sum of two number is: %f", number1 + number2);
    }

    else if (operator== '-')
    {
        printf("Difference of two number is: %f", number1 - number2);
    }

    else if (operator== '*')
    {
        printf("Multiplication of two number is: %f", number1 * number2);
    }

    else if (operator== '/')
    {
        if (number2 == 0)
        {
            printf("Zero as divisor is not valid!");
        }
        else
        {
            printf("Division of two number is: %f", number1 / number2);
        }
    }
}