#include <stdio.h>
#include <math.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int digit = log10(input_value);
    int temp_value = input_value;
    int sum = 0;

    while (input_value != 0)
    {
        int last_digit = input_value % 10;
        sum += pow(last_digit, digit + 1);
        input_value = input_value / 10;
    }

    if (temp_value == sum)
    {
        printf("Armstrong");
    }

    else
    {
        printf("Not Armstrong");
    }
}