#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter integer value: ");
    scanf("%d", &input_value);

    int binary = 0, place = 1;

    while (input_value != 0)
    {
        int last_digit = input_value % 2;

        binary = binary + (last_digit * place);
        place = place * 10;

        input_value = input_value / 2;
    }

    printf("%d", binary);
}