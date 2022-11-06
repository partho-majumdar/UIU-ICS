#include <stdio.h>
#include <math.h>

void main()
{
    float a = 21, b = 15, c = 34, d = 6, result;

    result = a * b + (a - c) / d + b;

    // int only_int = floor(result);

    printf("Answer %d", (int)result);
    // printf("Answer %d", only_int);
}
