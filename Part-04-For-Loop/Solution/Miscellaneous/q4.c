#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int count = 0;

    if (input_value == 0 || input_value == 1)
    {
        printf("Not prime");
    }

    else
    {
        for (int i = 2; i < input_value; i++)
        {
            if (input_value % i == 0)
            {
                count++;
            }
        }

        if (count > 0)
        {
            printf("Not Prime");
        }

        else
        {
            printf("Prime");
        }
    }
}