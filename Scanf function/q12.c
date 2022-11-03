#include <stdio.h>

void main()
{
    int input_value, five_hundred, one_hundred, fifty, ten, five, one;

    printf("Enter input_value: ");
    scanf("%d", &input_value);

    five_hundred = input_value / 500; // 1627 / 500 =-> 3
    input_value = input_value % 500;  // 1627 % 500 = 127

    one_hundred = input_value / 100; // 127 / 100 =-> 1
    input_value = input_value % 100; // 127 % 100 = 27

    fifty = input_value / 50;       // 27 / 50 = 0
    input_value = input_value % 50; // 27 % 50 = 27

    ten = input_value / 10;         // 27 / 10 =-> 2
    input_value = input_value % 10; // 27 % 10 = 7

    five = input_value / 5;        // 7 / 5 =-> 1
    input_value = input_value % 5; // 7 % 5 = 2

    one = input_value / 1;         // 2 / 1 =-> 2
    input_value = input_value % 1; // 2 % 1 = 0

    printf("%d note(s) of 500 \n", five_hundred);
    printf("%d note(s) of 100 \n", one_hundred);
    printf("%d note(s) of 50 \n", fifty);
    printf("%d note(s) of 10 \n", ten);
    printf("%d note(s) of 5 \n", five);
    printf("%d note(s) of 1", one);
}