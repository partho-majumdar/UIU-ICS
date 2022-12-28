#include <stdio.h>

void main()
{
    int angle1, angle2, angle3;

    printf("Enter value of angle1: ");
    scanf("%d", &angle1);

    printf("Enter value of angle2: ");
    scanf("%d", &angle2);

    printf("Enter value of angle3: ");
    scanf("%d", &angle3);

    int sum_of_3_angle = angle1 + angle2 + angle3;

    if (sum_of_3_angle == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("This triangle is valid");
    }
    else
    {
        printf("This triangle is not valid");
    }
}