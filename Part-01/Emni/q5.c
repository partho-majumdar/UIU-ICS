#include <stdio.h>
#include <math.h>

void main()
{
    // float n = -5.7;
    // int a = 3;
    // int b = 4;

    // int power = pow(a, b);
    // printf("%d", power);

    // int ceiling = (ceil)(n);
    // printf("%d", ceiling);

    float radian_value = .524;

    float sine = sin(radian_value);
    float cosine = cos(radian_value);
    float tangent = tan(radian_value);

    printf(" %f \n %f \n %f", sine, cosine, tangent);
}