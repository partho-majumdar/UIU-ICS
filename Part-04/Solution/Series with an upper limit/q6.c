#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    for (int i = 5; i < input_value; i *= 2)
    {
        printf("%d ", i);
    }
}