#include <stdio.h>

void main()
{
    int input_value1, input_value2, remainder, gcd, lcm;

    printf("Enter first value: ");
    scanf("%d", &input_value1);

    printf("Enter second value: ");
    scanf("%d", &input_value2);

    int temp_value1 = input_value1;
    int temp_value2 = input_value2;

    while (temp_value2 != 0)
    {
        remainder = temp_value1 % temp_value2;
        temp_value1 = temp_value2;
        temp_value2 = remainder;
    }

    gcd = temp_value1;

    printf("GCD : %d\n", gcd);
}