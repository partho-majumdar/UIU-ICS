#include <stdio.h>

void main()
{
    int input_val, feet, inch;

    printf("Enter value in inches: ");
    scanf("%d", &input_val);

    feet = input_val / 12;

    inch = input_val % 12;

    printf("%d feet %d inch", feet, inch);
}