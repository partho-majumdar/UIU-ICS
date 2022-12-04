#include <stdio.h>

void main()
{
    float input_value;
    printf("Enter your marks: ");
    scanf("%f", &input_value);

    if (input_value >= 90 && input_value <= 100)
    {
        printf("Grade: A");
    }

    else if (input_value >= 86 && input_value <= 89)
    {
        printf("Grade: A-");
    }

    else if (input_value >= 82 && input_value <= 85)
    {
        printf("Grade: B+");
    }

    else if (input_value >= 78 && input_value <= 81)
    {
        printf("Grade: B");
    }

    else if (input_value >= 74 && input_value <= 77)
    {
        printf("Grade: B-");
    }

    else if (input_value >= 70 && input_value <= 73)
    {
        printf("Grade: C+");
    }

    else if (input_value >= 66 && input_value <= 69)
    {
        printf("Grade: C");
    }

    else if (input_value >= 62 && input_value <= 65)
    {
        printf("Grade: C-");
    }

    else if (input_value >= 58 && input_value <= 61)
    {
        printf("Grade: D+");
    }

    else if (input_value >= 55 && input_value <= 57)
    {
        printf("Grade: D");
    }

    else if (input_value < 55)
    {
        printf("Grade: F");
    }

    else
    {
        printf("Enter valid marks");
    }
}