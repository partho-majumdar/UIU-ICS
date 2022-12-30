#include <stdio.h>

void main()
{
    int sum = 0;
    int count = 0;

    for (int i = 101; i < 200; i++)
    {
        if (i % 7 == 0)
        {
            printf("Number: %d\n", i);
            sum += i;
            count++;
        }
    }

    printf("Sum of all integer: %d\n", sum);
    printf("Total number: %d", count);
}

/*
    100 - 200 er moddhe total koyta number ache jader 7 diye divide kora jay and shei number er sum koto?
*/