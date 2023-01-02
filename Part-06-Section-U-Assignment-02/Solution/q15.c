#include <stdio.h>

void main()
{
    float course1, course2, course3;

    printf("Enter course1 marks: ");
    scanf("%f", &course1);

    printf("Enter course2 marks: ");
    scanf("%f", &course2);

    printf("Enter course3 marks: ");
    scanf("%f", &course3);

    if (course1 <= 100 && course2 <= 100 && course3 <= 100)
    {
        if (course1 >= 35 && course2 >= 35 && course3 >= 35)
        {
            int average = (course1 + course2 + course3) / 3;

            if (average >= 35)
            {
                printf("Pass");
            }

            else
            {
                printf("Fail");
            }
        }

        else if ((course1 >= 0 && course1 < 35) || (course2 >= 0 && course2 < 35) || (course3 >= 0 && course3 < 35))
        {
            printf("Fail");
        }
    }

    else
    {
        printf("Marks can not exceed 100");
    }
}