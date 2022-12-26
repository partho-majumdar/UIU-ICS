#include <stdio.h>
#include <math.h>

void main()
{
    int input_value;
    printf("Enter binary value: ");
    scanf("%d", &input_value);

    int sum = 0, i = 0;
    while (input_value != 0)
    {
        int last_digit = input_value % 10;
        sum = sum + (last_digit * pow(2, i));
        input_value = input_value / 10;
        i++;
    }

    printf("Decimal: %d", sum);
}