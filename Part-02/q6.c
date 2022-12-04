#include <stdio.h>

void main()
{
    int n = 1020;
    printf("Enter any number: ");
    scanf("%d", &n);

    int temp = n;

    if (n > 0)
    {
        while (n % 2 == 0)
        {
            n = n / 2;
        }

        if (n == 1)
        {
            printf("Yes! %d is power of 2", temp);
        }

        else
        {
            printf("No! %d is not power of 2", temp);
        }
    }

    else
    {
        if (n == 0)
        {
            printf("Zero is not a valid input");
        }

        else if (n < 0)
        {
            printf("Negative input is not valid");
        }
    }
}