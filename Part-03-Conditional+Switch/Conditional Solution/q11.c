#include <stdio.h>

void main()
{
    float x, y;

    printf("Enter value of X: ");
    scanf("%f", &x);

    printf("Enter value of Y: ");
    scanf("%f", &y);

    if (x > 0 && y > 0)
    {
        printf("(%.f, %.f) lies in the first quadrant", x, y);
    }

    else if (x < 0 && y > 0)
    {
        printf("(%.f, %.f) lies in the second quadrant", x, y);
    }

    else if (x < 0 && y < 0)
    {
        printf("(%.f, %.f) lies in the third quadrant", x, y);
    }

    else if (x > 0 && y < 0)
    {
        printf("(%.f, %.f) lies in the fourth quadrant", x, y);
    }
}