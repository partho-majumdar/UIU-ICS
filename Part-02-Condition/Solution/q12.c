#include <stdio.h>

void main()
{
    float a, b;
    int choice;

    printf("Enter number(1 for addition, 2 for subtraction, 3 for multiplication, 4 for division) to choose operator: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {
        printf("Enter value of a: ");
        scanf("%f", &a);

        printf("Enter value of b: ");
        scanf("%f", &b);

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

        else if (choice == 4)
        {
            printf("Division: %d", (int)(a / b));
        }
    }

    else
    {
        printf("Enter valid operator");
    }
}