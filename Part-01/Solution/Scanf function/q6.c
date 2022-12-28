#include <stdio.h>
#include <math.h>

void main()
{
    float radius, result;
    float pi = 3.14159;

    printf("Enter radius: ");
    scanf("%f", &radius);
    // result = pi * radius * radius;
    result = M_PI * radius * radius;
    printf("Area of a circle is: %.5f", result);
}

// area of a circle = pi * r * r