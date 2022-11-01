#include <stdio.h>

void main()
{
    float a = 2.3, b = 5.8, c = 1.1, d = 3.5, result;

    result = (a + b - c) * d - a / d;
    printf("Answer %.6f", result);
}