#include <stdio.h>

void main()
{
    int X, Y;
    printf("Enter value of X: ");
    scanf("%d", &X);

    printf("Enter value of Y: ");
    scanf("%d", &Y);

    if (X > Y)
    {
        printf("%d is greater than %d", X, Y);
    }
    else if (X < Y)
    {
        printf("%d is less than %d", X, Y);
    }
    else
    {
        printf("%d is equal to %d", X, Y);
    }
}