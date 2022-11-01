#include <stdio.h>

void main()
{
    float a, b, c, d, result;

    printf("Enter four number to calculate: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d);
    result = (a + b - c) * d - a / d;
    printf("Answer: %.6f", result);
}