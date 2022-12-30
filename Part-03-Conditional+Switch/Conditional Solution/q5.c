#include <stdio.h>

void main()
{
    char input_char;
    printf("Enter any character: ");
    scanf("%c", &input_char);

    if ((input_char >= 'a' && input_char <= 'z') || input_char >= 'A' && input_char <= 'Z')
    {
        if ((input_char == 'a' || input_char == 'e' || input_char == 'i' || input_char == 'o' || input_char == 'u') || (input_char == 'A' || input_char == 'E' || input_char == 'I' || input_char == 'O' || input_char == 'U'))
        {
            printf("Vowel");
        }

        else
        {
            printf("Consonant");
        }
    }

    else
    {
        printf("Enter valid alphabet");
    }
}