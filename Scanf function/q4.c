#include <stdio.h>

void main()
{
    int a, b, c, d, result;

    printf("Enter four number to calculate: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d);
    result = a * b + (a - c) / d + b;
    printf("Answer: %d", result);
}