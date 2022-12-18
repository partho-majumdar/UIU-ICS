#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    for (int i = 1; i <= input_value; i++)
    {
        if (i == input_value)
        {
            printf("%d", i);
        }

        else
        {
            printf("%d ", i);
        }
    }
}