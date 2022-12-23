#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter value in centimeters: ");
    scanf("%d", &input_value);

    int meter = input_value / 100;
    int centimeter = input_value % 100;

    printf("%d meter %d centimeter", meter, centimeter);
}