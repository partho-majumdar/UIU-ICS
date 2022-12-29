#include <stdio.h>

void main()
{
    int first_val, second_val;

    printf("Enter value of X: ");
    scanf("%d", &first_val);

    printf("Enter value of Y: ");
    scanf("%d", &second_val);

    if (first_val > 0 && second_val > 0)
    {
        printf("First quadrant");
    }

    else if (first_val < 0 && second_val > 0)
    {
        printf("Second quadrant");
    }

    else if (first_val < 0 && second_val < 0)
    {
        printf("Third quadrant");
    }

    else if (first_val > 0 && second_val < 0)
    {
        printf("Fourth quadrant");
    }
}