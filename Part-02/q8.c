#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any year to see whether a year us leap year or not: ");
    scanf("%d", &input_value);

    if ((input_value % 4 == 0 && input_value % 100 != 0) || (input_value % 400 == 0))
    {
        printf("You entered %d and this year is leap year", input_value);
    }
    else
    {
        printf("You entered %d and this year is not leap year", input_value);
    }
}