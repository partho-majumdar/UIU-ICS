#include <stdio.h>

void main()
{
    int memory_bit;

    printf("Enter bits of memory: ");
    scanf("%d", &memory_bit);

    if (memory_bit >= 8)
    {
        float nibbles = (float)(memory_bit) / 4;

        if (nibbles == (int)(nibbles))
        {
            printf("Good");
        }

        else
        {
            printf("Not good");
        }
    }

    else
    {
        printf("Not good");
    }
}