#include <stdio.h>

void main()
{
    int first, other, max, min;

    printf("Enter first value: ");
    scanf("%d", &first);

    max = first;
    min = first;

    for (int i = 1; i < 3; i++)
    {
        printf("Enter other value: ");
        scanf("%d", &other);

        if (other > max)
        {
            max = other;
        }

        if (other < min)
        {
            min = other;
        }
    }

    int ans = max - min;
    printf("Ans: %d", ans);
}

/*

#include <stdio.h>

void main()
{
    int A, B, C, max, min;

    printf("Enter first value: ");
    scanf("%d", &A);

    printf("Enter second value: ");
    scanf("%d", &B);

    printf("Enter third value: ");
    scanf("%d", &C);

    max = A;
    min = A;

    if (B > max)
    {
        max = B;
    }

    if (C > max)
    {
        max = C;
    }

    if (B < min)
    {
        min = B;
    }

    if (C < min)
    {
        min = C;
    }

    int ans = max - min;

    printf("Ans: %d", ans);
}

*/