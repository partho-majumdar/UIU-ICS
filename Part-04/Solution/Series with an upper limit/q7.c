#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    for (int i = 10; i < input_value; i *= 3)
    {
        printf("%d ", i);
    }
}