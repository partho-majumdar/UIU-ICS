#include <stdio.h>

void main()
{
    int input_num, first_num, other_num;

    printf("Enter how many number you want to take: ");
    scanf("%d", &input_num);

    printf("Enter first number: ");
    scanf("%d", &first_num);

    int large_num = first_num;
    int small_num = first_num;

    for (int i = 1; i < input_num; i++)
    {
        printf("Enter another number: ");
        scanf("%d", &other_num);

        if (other_num > large_num)
        {
            large_num = other_num;
        }

        if (other_num < small_num) 
        {
            small_num = other_num;
        }
    }

    printf("Largest number: %d\n", large_num);
    printf("Smallest number: %d", small_num);
}