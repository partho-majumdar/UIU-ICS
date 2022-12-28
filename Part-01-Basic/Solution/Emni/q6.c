#include <stdio.h>
#include <math.h>

void main()
{
    float a = 1;
    float b = -4;
    float c = 4;

    double d = (b * b) - (4 * a * c);

    double root_d = sqrt(d);

    double x1 = (-b + root_d) / 2 * a;
    double x2 = (-b - root_d) / 2 * a;

    printf("Answer1: %.2lf \n", x1);
    printf("Answer2: %.2lf", x2);
}