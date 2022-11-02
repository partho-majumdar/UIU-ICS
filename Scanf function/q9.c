#include <stdio.h>
#include <math.h>

void main()
{
    float height, meter;

    printf("Enter any value in centimeter: ");
    scanf("%f", &height);

    meter = height / 100;

    int integer_val = (int)meter;
    float float_val = (meter - integer_val);

    printf("%d meter %.2f centimeter", integer_val, float_val);
}