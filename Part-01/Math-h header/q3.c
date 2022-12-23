#include <stdio.h>
#include <math.h>

void main()
{
    float radian, degree;

    printf("Enter value in radian: ");
    scanf("%f", &radian);

    printf("Sin(%.3f) = %.2f \n", radian, sin(radian));
    printf("Cos(%.3f) = %.2f \n", radian, cos(radian));
    printf("Tan(%.3f) = %.2f \n", radian, tan(radian));
}