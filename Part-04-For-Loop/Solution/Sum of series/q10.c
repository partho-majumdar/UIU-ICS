#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    int sum = 0;

    for (int i = 1, j = 2, m = 1, n = 5; i <= input_value, m <= input_value; i++, j *= 2, m++, n += 3)
    {
        sum = sum + (j * n);
    }

    printf("Answer: %d", sum);
}
