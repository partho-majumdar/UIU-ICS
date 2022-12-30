#include <stdio.h>

void main()
{
    float input_value;

    printf("Enter any number: ");
    scanf("%f", &input_value);

    if (input_value > 0)
    {
        printf("Number is positive");
    }

    else if (input_value == 0)
    {
        printf("Number is zero");
    }

    else
    {
        printf("Number is negative");
    }
}