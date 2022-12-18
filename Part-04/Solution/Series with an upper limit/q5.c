#include <stdio.h>

void main()
{
    int input_number;
    printf("Enter any number: ");
    scanf("%d", &input_number);

    for (int i = 1; i <= input_number; i = i * 2)
    {
        printf("%d ", i);
    }
}