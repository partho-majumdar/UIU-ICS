#include <stdio.h>

void main()
{
    float unit, amount, total_amount;
    printf("Enter unit: ");
    scanf("%f", &unit);

    if (unit <= 200)
    {
        amount = unit * 0.50;
    }

    else if (unit <= 400)
    {
        amount = (200 * 0.50) + ((unit - 200) * 0.65);
    }

    else if (unit <= 600)
    {
        amount = ((200 * 0.50) + (200 * 0.65)) + ((unit - 400) * 0.80);
    }

    else
    {
        amount = ((200 * 0.50) + (200 * 0.65) + (200 * 0.80)) + ((unit - 600) * 1);
    }

    total_amount = amount;
    printf("Total amount: %.2f", total_amount);
}