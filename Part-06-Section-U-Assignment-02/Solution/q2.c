#include <stdio.h>

void main()
{
    int input_value;
    float cg_value;

    printf("Enter how many number you want to print: ");
    scanf("%d", &input_value);

    float sum = 0;

    for (int i = 1; i <= input_value; i++)
    {
        printf("Enter trimester cg: ");
        scanf("%f", &cg_value);

        sum = sum + cg_value;
    }

    float final_cgpa = sum / input_value;
    printf("CGPA: %.2f", final_cgpa);
}