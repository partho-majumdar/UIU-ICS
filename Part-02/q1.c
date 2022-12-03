#include <stdio.h>

void main()
{
    float input_value;
    printf("Enter any number to check whether a number is positive or not: ");
    scanf("%f", &input_value);

    if (input_value < 0)
    {
        printf("You entered %.2f and this number is negative", input_value);
    }
    else
    {
        printf("You entered %.2f and this number is positive", input_value);
    }
}