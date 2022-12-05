#include <stdio.h>
#include <math.h>

void main()
{
    float a, b;
    int choice, sub_case;

    printf("Enter number(1 for addition, 2 for subtraction, 3 for multiplication, 4 for surprise) to choose operator: ");
    scanf("%d", &choice);

    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    if (choice >= 1 && choice <= 3)
    {
        if (choice == 1)
        {
            printf("Addition: %.f", a + b);
        }

        else if (choice == 2)
        {
            printf("Subtraction: %.f", a - b);
        }

        else if (choice == 3)
        {
            printf("Multiplication: %.f", a * b);
        }
    }

    else if (b == 0)
    {
        printf("Error: Divisor is zero");
    }

    else if (choice == 4 && b != 0)
    {
        printf("Enter '1' for division and '2' for reminder: ");
        scanf("%d", &sub_case);

        if (sub_case >= 1 && sub_case <= 2)
        {
            if (sub_case == 1)
            {
                printf("Division: %d", (int)(a / b));
            }

            else if (sub_case == 2)
            {
                int rem = remainder(a, b);

                printf("Remainder: %d", rem);
            }
        }

        else
        {
            printf("Enter 1 or 2");
        }
    }

    else
    {
        printf("Enter valid operator");
    }
}