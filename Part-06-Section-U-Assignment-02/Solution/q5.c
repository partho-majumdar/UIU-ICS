#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    for (int i = 1, j = input_value; i <= 10; i++, j++)
    {
        if (j % 2 == 0)
        {
            printf("%d \n", j);
        }
    }
}