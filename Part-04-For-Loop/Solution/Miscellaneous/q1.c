#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int init_fact_value = 1;
    for (int i = input_value; i >= 1; i--)
    {
        init_fact_value *= i;
    }

    printf("Answer: %d", init_fact_value);
}