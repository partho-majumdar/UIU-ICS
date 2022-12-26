#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int digit_sum = 0;

    while (input_value != 0)
    {
        int last_digit = input_value % 10;
        digit_sum += last_digit;
        input_value = input_value / 10;
    }

    printf("Sum of the digit: %d", digit_sum);
}