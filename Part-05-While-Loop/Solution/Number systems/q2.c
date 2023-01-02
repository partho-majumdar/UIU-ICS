#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter decimal value: ");
    scanf("%d", &input_value);

    int octal = 0, place = 1;

    while (input_value != 0)
    {
        int last_octal_digit = input_value % 8;

        octal = octal + (last_octal_digit * place);
        place = place * 10;

        input_value = input_value / 8;
    }

    printf("Octal: %d", octal);
}