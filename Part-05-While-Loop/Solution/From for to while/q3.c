#include <stdio.h>

void main()
{
    int input_value;

    printf("Enter any number: ");
    scanf("%d", &input_value);

    int ans = 0;

    for (int i = 1, j = 1, k = 1, l = 3; i <= input_value, k <= input_value; i++, k++, j *= 2, l += 3)
    {
        ans = ans + (j * l);
    }

    printf("Answer: %d ", ans);
}

// 1 + 2 + 4 + 8 + .......... nth term = 1 * (2)^(n-1)
// 3 + 6 + 9 + 12 + ......... nth term = 3n