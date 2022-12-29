#include <stdio.h>

void main()
{
    int val1, val2;

    printf("Enter first value of range: ");
    scanf("%d", &val1);

    printf("Enter second value of range: ");
    scanf("%d", &val2);

    int sum = 0;
    for (int i = val1 + 1, j = val1 + 1; i < val2; i++, j++)
    {
        if (j % 2 != 0)
        {
            sum += j;
        }
    }

    printf("Sum of odd values: %d", sum);
}