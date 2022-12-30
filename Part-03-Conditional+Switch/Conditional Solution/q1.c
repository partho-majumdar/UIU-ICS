#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    if (input_value % 5 == 0 && input_value % 11 == 0)
    {
        printf("%d is divisible by 5 and 11", input_value);
    }

    else
    {
        printf("%d is not divisible by 5 and 11", input_value);
    }
}
