#include <stdio.h>

void main()
{
    int item_number, quantity;
    float Total;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter amount of an item: ");
    scanf("%d", &quantity);

    switch (item_number)
    {
    case 1:
        printf("Total: R$ %.2f", 4.00 * quantity);
        break;

    case 2:
        printf("Total: R$ %.2f", 4.50 * quantity);
        break;

    case 3:
        printf("Total: R$ %.2f", 5.00 * quantity);
        break;

    case 4:
        printf("Total: R$ %.2f", 2.00 * quantity);
        break;

    case 5:
        printf("Total: R$ %.2f", 1.50 * quantity);
        break;

    default:
        printf("Enter value from 1-5");
    }
}