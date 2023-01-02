#include <stdio.h>

void main()
{
    int input_value;

    printf("Enter nth term: ");
    scanf("%d", &input_value);

    int sum = 0;

    for (int i = 1, j = 1; i <= input_value * 2; i++, j++)
    {
        if (j % 2 != 0)
        {
            sum = sum + j;
        }
    }

    printf("Ans: %d", sum);
}