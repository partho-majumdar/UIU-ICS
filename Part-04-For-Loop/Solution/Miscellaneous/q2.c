#include <stdio.h>

void main()
{
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (n > r)
    {
        int fact_n = 1;
        for (int i = n; i > 0; i--)
        {
            fact_n *= i;
        }

        int fact_n_r = 1;
        for (int i = n - r; i > 0; i--)
        {
            fact_n_r *= i;
        }

        int ans = (fact_n) / fact_n_r;

        printf("Answer: %d", ans);
    }

    else
    {
        printf("Enter valid input so that n > r.");
    }
}