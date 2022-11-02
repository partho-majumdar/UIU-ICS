#include <stdio.h>

void main()
{
    int amount, five_hundred, one_hundred, fifty, ten, five, one;

    printf("Enter amount: ");
    scanf("%d", &amount);

    five_hundred = amount / 500; // 1627 / 500 =-> 3
    amount = amount % 500;       // 1627 % 500 = 127

    one_hundred = amount / 100; // 127 / 100 =-> 1
    amount = amount % 100;      // 127 % 100 = 27

    fifty = amount / 50;  // 27 / 50 = 0
    amount = amount % 50; // 27 % 50 = 27

    ten = amount / 10;    // 27 / 10 =-> 2
    amount = amount % 10; // 27 % 10 = 7

    five = amount / 5;   // 7 / 5 =-> 1
    amount = amount % 5; // 7 % 5 = 2

    one = amount / 1;    // 2 / 1 =-> 2
    amount = amount % 1; // 2 % 1 = 0

    printf("%d notes of 500 \n", five_hundred);
    printf("%d notes of 100 \n", one_hundred);
    printf("%d notes of 50 \n", fifty);
    printf("%d notes of 10 \n", ten);
    printf("%d notes of 5", one);
}