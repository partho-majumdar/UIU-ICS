#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter value in inches: ");
    scanf("%d", &input_value);

    int feet = input_value / 12;
    int inch = input_value % 12;

    printf("%d feet %d inch", feet, inch);
}