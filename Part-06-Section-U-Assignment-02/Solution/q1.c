#include <stdio.h>

void main()
{
    int input_num, first_num, large_num, small_num;

    printf("Enter how many number you want to print: ");
    scanf("%d", &input_num);

    printf("Enter first number: ");
    scanf("%d", &first_num);

    large_num = first_num;
    small_num = first_num;

    for (int i = 1; i < input_num; i++)
    {
        printf("Enter another number: ");
        scanf("%d", &first_num);

        if (first_num > large_num)
        {
            large_num = first_num;
        }

        if (first_num < small_num)
        {
            small_num = first_num;
        }
    }

    printf("Largest number: %d\n", large_num);
    printf("Smallest number: %d", small_num);
}