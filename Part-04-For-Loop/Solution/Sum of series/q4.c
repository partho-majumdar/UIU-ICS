#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    int sum = 0;

    for (int i = 1, j = 3; i <= input_value; i++, j += 3)
    {
        sum = sum + j;
    }

    printf("Answer: %d", sum);
}
