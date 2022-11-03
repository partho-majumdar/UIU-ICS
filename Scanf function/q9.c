#include <stdio.h>
#include <math.h>

void main()
{
    int input_val, meter, centimeter;

    printf("Enter any value in centimeter: ");
    scanf("%d", &input_val);

    meter = input_val / 100;
    centimeter = input_val % 100;

    printf("%d meter %d centimeter", meter, centimeter);
}