#include <stdio.h>

void main()
{
    int input_value, last_digit;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int temp_value = input_value;

    int sum = 0;
    while (input_value != 0)
    {
        last_digit = input_value % 10;
        sum = (sum * 10) + last_digit;
        input_value = input_value / 10;
    }

    if (temp_value == sum)
    {
        printf("Palindrome");
    }

    else
    {
        printf("Not palindrome");
    }

}