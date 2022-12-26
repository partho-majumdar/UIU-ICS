#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int i = 1;
    while (i <= input_value)
    {
        int odd_value = 2 * i - 1;
        printf("%d ", odd_value);
        i++;
    }
}
