#include <stdio.h>

void main()
{
    int base_value, power;
    printf("Enter base value: ");
    scanf("%d", &base_value);

    printf("Enter power value: ");
    scanf("%d", &power);

    int init_ans = 1;
    for (int i = 1, j = base_value; i <= power; i++)
    {
        init_ans *= j;
    }

    printf("Answer: %d", init_ans);
}