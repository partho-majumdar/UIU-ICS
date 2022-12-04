// ----------> Way 01 <----------

// #include <stdio.h>

// void main()
// {
//     int input_value;
//     printf("Enter any number: ");
//     scanf("%d", &input_value);

//     if ((input_value != 0) && (input_value & (input_value - 1)) == 0)
//     {
//         printf("%d is power of 2", input_value);
//     }
//     else
//     {
//         printf("%d is not power of 2", input_value);
//     }
// }

// ----------> Way 02 <----------

#include <stdio.h>

void main()
{
    int n;
    printf("Enter any number except 0 and -ve: ");
    scanf("%d", &n);

    int temp = n;

    while (n % 2 == 0)
    {
        n = n / 2;
    }

    if (n == 1)
    {
        printf("Yes! %d is power of 2", temp);
    }

    else
    {
        printf("No! %d is not power of 2", temp);
    }
}