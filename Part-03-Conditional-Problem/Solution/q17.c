#include <stdio.h>

void main()
{
    float phy, chem, math, bio, computer, percentage;

    printf("Enter Physics marks: ");
    scanf("%f", &phy);

    printf("Enter Chemistry marks: ");
    scanf("%f", &chem);

    printf("Enter Math marks: ");
    scanf("%f", &math);

    printf("Enter Biology marks: ");
    scanf("%f", &bio);

    printf("Enter Computer marks: ");
    scanf("%f", &computer);

    if (phy <= 100 && chem <= 100 && math <= 100 && bio <= 100 && computer <= 100)
    {
        percentage = (phy + chem + math + bio + computer) / 5;

        if (percentage >= 90)
        {
            printf("Percentage = %.2f\n", percentage);
            printf("Grade A");
        }

        else if (percentage >= 80)
        {
            printf("Percentage = %.2f\n", percentage);
            printf("Grade B");
        }

        else if (percentage >= 70)
        {
            printf("Percentage = %.2f\n", percentage);
            printf("Grade C");
        }

        else if (percentage >= 60)
        {
            printf("Percentage = %.2f\n", percentage);
            printf("Grade D");
        }

        else if (percentage >= 40)
        {
            printf("Percentage = %.2f\n", percentage);
            printf("Grade E");
        }

        else if (percentage < 40)
        {
            printf("Percentage = %.2f\n", percentage);
            printf("Grade F");
        }
    }

    else
    {
        printf("Enter valid marks");
    }
}