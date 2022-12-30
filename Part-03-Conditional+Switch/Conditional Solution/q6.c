#include <stdio.h>

void main()
{
    char input_value;
    printf("Enter any character: ");
    scanf("%c", &input_value);

    if ((input_value >= 'a' && input_value <= 'z') || (input_value >= 'A' && input_value <= 'Z'))
    {
        printf("Alphabet");
    }

    else if (input_value >= '0' && input_value <= '9')
    {
        printf("Number");
    }

    else
    {
        printf("Special character");
    }
}