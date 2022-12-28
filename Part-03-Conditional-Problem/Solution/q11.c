#include <stdio.h>

void main()
{
    float x, y;
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0)
    {
        printf("(%f, %f) lies in the first quadrant", x, y);
    }

    else if (x < 0 && y > 0)
    {
        printf("(%f, %f) lies in the second quadrant", x, y);
    }

    else if (x < 0 && y < 0)
    {
        printf("(%f, %f) lies in the third quadrant", x, y);
    }

    else if (x > 0 && y < 0)
    {
        printf("(%f, %f) lies in the fourth quadrant", x, y);
    }
}