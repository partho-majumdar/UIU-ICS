#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    int sum = 0;

    for (int i = 1, j = 1, m = 1, n = 2; i <= input_value, m <= input_value; i++, j++, m++, n++)
    {
        sum = sum + (j * n);
    }

    printf("Answer: %d", sum);
}
