#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any number from (0-9): ");
    scanf("%d", &input_value);

    //---------> Way - 01 <---------

    if (input_value == 0)
    {
        printf("Zero");
    }

    else if (input_value == 1)
    {
        printf("One");
    }

    else if (input_value == 2)
    {
        printf("Two");
    }

    else if (input_value == 3)
    {
        printf("Three");
    }

    else if (input_value == 4)
    {
        printf("Four");
    }

    else if (input_value == 5)
    {
        printf("Five");
    }

    else if (input_value == 6)
    {
        printf("Six");
    }

    else if (input_value == 7)
    {
        printf("Seven");
    }

    else if (input_value == 8)
    {
        printf("Eight");
    }

    else if (input_value == 9)
    {
        printf("Nine");
    }

    else
    {
        printf("Enter number from 0 to 9");
    }

    //---------> Way - 02 <---------

    /*

    switch (input_value)
    {
    case 0:
        printf("Zero");
        break;

    case 1:
        printf("One");
        break;

    case 2:
        printf("Two");
        break;

    case 3:
        printf("Three");
        break;

    case 4:
        printf("Four");
        break;

    case 5:
        printf("Five");
        break;

    case 6:
        printf("Six");
        break;

    case 7:
        printf("Seven");
        break;

    case 8:
        printf("Eight");
        break;

    case 9:
        printf("Nine");
        break;

    default:
        printf("Enter number from 0 to 9");
        break;
    }

    */

    //---------> Way - 03 (Advanced) <---------

    /*

    int input_value = 2345;

    int sum = 0;
    int rem = 0;

    while (input_value != 0)
    {
        rem = input_value % 10;
        sum = (sum * 10) + rem;
        input_value = input_value / 10;
    }

    printf("Reverse num is: %d \n", sum);

    while (sum != 0)
    {
        rem = sum % 10;

        switch (rem)
        {
        case 0:
            printf("Zero ");
            break;

        case 1:
            printf("One ");
            break;

        case 2:
            printf("Two ");
            break;

        case 3:
            printf("Three ");
            break;

        case 4:
            printf("Four ");
            break;

        case 5:
            printf("Five ");
            break;

        case 6:
            printf("Six ");
            break;

        case 7:
            printf("Seven ");
            break;

        case 8:
            printf("Eight ");
            break;

        case 9:
            printf("Nine ");
            break;

        default:
            printf("Enter number from 0 to 9");
            break;
        }
        sum = sum / 10;
    }

    */
}