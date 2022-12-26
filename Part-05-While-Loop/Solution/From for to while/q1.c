#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int i = 1;
    while (i <= input_value)
    {
        printf("%d ", i);
        i++;
    }
}