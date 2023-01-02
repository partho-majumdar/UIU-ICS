#include <stdio.h>

void main()
{
    int tea_type, A, B, C, D, E;

    printf("1. White tea\n2. Green tea\n3. Black tea\n4. Herbal tea\nJudge pick any number: ");
    scanf("%d", &tea_type);

    int count = 0;

    if (tea_type >= 1 && tea_type <= 4)
    {
        printf("'A' guess the tea type(1 for white tea, 2 for green tea, 3 for black tea, 4 for herbal tea): ");
        scanf("%d", &A);

        printf("'B' guess the tea type(1 for white tea, 2 for green tea, 3 for black tea, 4 for herbal tea): ");
        scanf("%d", &B);

        printf("'C' guess the tea type(1 for white tea, 2 for green tea, 3 for black tea, 4 for herbal tea): ");
        scanf("%d", &C);

        printf("'D' guess the tea type(1 for white tea, 2 for green tea, 3 for black tea, 4 for herbal tea): ");
        scanf("%d", &D);

        printf("'E' guess the tea type(1 for white tea, 2 for green tea, 3 for black tea, 4 for herbal tea): ");
        scanf("%d", &E);

        if ((A >= 1 && A <= 4) && (B >= 1 && B <= 4) && (C >= 1 && C <= 4) && (D >= 1 && D <= 4) && (E >= 1 && E <= 4))
        {
            if (tea_type == A)
            {
                count++;
            }

            if (tea_type == B)
            {
                count++;
            }

            if (tea_type == C)
            {
                count++;
            }

            if (tea_type == D)
            {
                count++;
            }

            if (tea_type == E)
            {
                count++;
            }

            printf("Ans: %d", count);
        }

        else
        {
            printf("Guess any number from 1-4");
        }
    }

    else
    {
        printf("Enter value from 1-4");
    }
}