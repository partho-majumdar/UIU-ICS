#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number: ");
    scanf("%d", &input_value);

    int frequency_0 = 0;
    int frequency_1 = 0;
    int frequency_2 = 0;
    int frequency_3 = 0;
    int frequency_4 = 0;
    int frequency_5 = 0;
    int frequency_6 = 0;
    int frequency_7 = 0;
    int frequency_8 = 0;
    int frequency_9 = 0;

    while (input_value != 0)
    {
        int last_digit = input_value % 10;

        if (last_digit == 0)
        {
            frequency_0++;
        }

        else if (last_digit == 1)
        {
            frequency_1++;
        }

        else if (last_digit == 2)
        {
            frequency_2++;
        }

        else if (last_digit == 3)
        {
            frequency_3++;
        }

        else if (last_digit == 4)
        {
            frequency_4++;
        }

        else if (last_digit == 5)
        {
            frequency_5++;
        }

        else if (last_digit == 6)
        {
            frequency_6++;
        }

        else if (last_digit == 7)
        {
            frequency_7++;
        }

        else if (last_digit == 8)
        {
            frequency_8++;
        }

        else if (last_digit == 9)
        {
            frequency_9++;
        }

        input_value = input_value / 10;
    }

    printf("Frequency of 0: %d\n", frequency_0);
    printf("Frequency of 1: %d\n", frequency_1);
    printf("Frequency of 2: %d\n", frequency_2);
    printf("Frequency of 3: %d\n", frequency_3);
    printf("Frequency of 4: %d\n", frequency_4);
    printf("Frequency of 5: %d\n", frequency_5);
    printf("Frequency of 6: %d\n", frequency_6);
    printf("Frequency of 7: %d\n", frequency_7);
    printf("Frequency of 8: %d\n", frequency_8);
    printf("Frequency of 9: %d\n", frequency_9);
}
