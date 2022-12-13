#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter value of n: ");
    scanf("%d", &input_value);

    for (int i = 1; i <= input_value; i++)
    {
        printf("%d \n", i);
    }
}