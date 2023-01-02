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

    printf("Answer: %d", ans);
}

/*

----------------Using While loop------------------

#include <stdio.h>

void main()
{
    int input_value;

    printf("Enter any number: ");
    scanf("%d", &input_value);

    int ans = 0;

    int i = 1, k = 1, j = 1, l = 3;

    while (i <= input_value && k <= input_value)
    {

        ans = ans + (j * l);

        j *= 2;
        l += 3;

        i++;
        k++;
    }

    printf("Answer: %d ", ans);
}

*/