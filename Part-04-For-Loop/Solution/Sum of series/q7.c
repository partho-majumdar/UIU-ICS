#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    int sum = 0;

    for (int i = 1, j = 10; i <= input_value; i++, j = j + (2 * j))
    {
        sum = sum + j;
    }

    printf("Answer: %d", sum);
}
