#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number to check whether a number is even or odd: ");
    scanf("%d", &input_value);

    if (input_value % 2 == 0)
    {
        printf("You entered %d and this number is even", input_value);
    }

    else
    {
        printf("You entered %d and this number is odd", input_value);
    }
}
