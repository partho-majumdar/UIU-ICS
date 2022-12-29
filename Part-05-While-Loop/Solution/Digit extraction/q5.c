#include <stdio.h>
#include <math.h>

int main()
{
    int input_number, first, last, swap, digit, divide;
    printf("Enter any number: ");
    scanf("%d", &input_number);

    digit = log10(input_number);

    divide = pow(10, digit);

    first = input_number / divide;

    input_number = input_number % divide;

    last = input_number % 10;

    input_number = input_number / 10;

    swap = (last * divide) + (input_number * 10) + first;

    printf("Answer: %d", swap);
}