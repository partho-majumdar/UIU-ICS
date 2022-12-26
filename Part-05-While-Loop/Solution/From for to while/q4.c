#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int count = 0;
    int init_value = 2;

    if (input_value == 0 || input_value == 1)
    {
        printf("Not prime");
    }

    else
    {
        while (init_value < input_value)
        {
            if (input_value % init_value == 0)
            {
                count++;
            }
            init_value++;
        }

        if (count > 0)
        {
            printf("Not prime");
        }

        else
        {
            printf("Prime");
        }
    }
}
