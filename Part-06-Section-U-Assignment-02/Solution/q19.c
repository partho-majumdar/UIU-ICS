#include <stdio.h>

void main()
{
    int input_num, weapon_num;

    printf("Enter total weapon: ");
    scanf("%d", &input_num);

    int lucky_count = 0;
    int unlucky_count = 0;

    for (int i = 1; i <= input_num; i++)
    {
        printf("Enter weapon serial number: ");
        scanf("%d", &weapon_num);

        if (weapon_num % 2 == 0)
        {
            lucky_count++;
        }

        else
        {
            unlucky_count++;
        }
    }

    if (lucky_count > unlucky_count)
    {
        printf("Ready for battle");
    }

    else
    {
        printf("Not ready");
    }
}
