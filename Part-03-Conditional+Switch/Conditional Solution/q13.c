#include <stdio.h>

void main()
{
    float unit, amount, total_amount, surcharge;

    printf("Enter unit: ");
    scanf("%f", &unit);

    if (unit <= 200)
    {
        amount = unit * 4.5;
    }

    else if (unit <= 300)
    {
        amount = (200 * 4.5) + ((unit - 200) * 5.5);
    }

    else if (unit <= 500)
    {
        amount = ((200 * 4.5) + (100 * 5.5)) + ((unit - 300) * 6.5);
    }

    else
    {
        amount = ((200 * 4.5) + (100 * 5.5) + (200 * 6.5)) + ((unit - 500) * 10.5);
    }

    if (amount > 400)
    {
        surcharge = amount * 0.15;
        total_amount = surcharge + amount + 100;

        printf("Total amount: %.2f", total_amount);
    }

    else if (amount < 400)
    {
        total_amount = amount + 100;
        printf("Total amount: %.2f", total_amount);
    }
}