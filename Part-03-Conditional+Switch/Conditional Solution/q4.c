#include <stdio.h>

void main()
{
    char input_char;

    printf("Enter any character: ");
    scanf("%c", &input_char);

    if ((input_char >= 'a' && input_char <= 'z') || (input_char >= 'A' && input_char <= 'Z'))
    {
        printf("character is alphabet");
    }

    else
    {
        printf("Enter valid character");
    }
}

// char --> 'a' <= char <= 'z'
