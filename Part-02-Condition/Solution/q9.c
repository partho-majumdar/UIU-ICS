#include <stdio.h>

void main()
{
    char input_value;
    printf("Enter any character: ");
    scanf("%c", &input_value);

    if (input_value >= 'a' && input_value <= 'z' || input_value >= 'A' && input_value <= 'Z')
    {
        printf("'%c' is alphabet", input_value);
    }

    else if (input_value >= '0' && input_value <= '9')
    {
        printf("'%c' is digit", input_value);
    }

    else
    {
        printf("'%c' is special character");
    }
}