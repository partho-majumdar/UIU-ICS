#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, result;
    printf("Enter two number: ");
    scanf("%f %f", &a, &b);
    result = pow(a, b);
    printf("Answer: %.2f", result);
}