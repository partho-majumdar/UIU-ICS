#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    int sum = 0;
    for (int i = 1; i <= input_value; i++)
    {
        if (i == input_value)
        {
            printf("%d\n", i);
        }

        else
        {
            printf("%d + ", i);
        }

        sum = sum + i;
    }

    printf("Answer: %d", sum);
}
