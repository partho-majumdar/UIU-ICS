#include <stdio.h>

void main()
{
    int student_num, reg_num;
    float score;

    printf("Enter total student number: ");
    scanf("%d", &student_num);

    float init_score = 0;
    int final_reg = 0;

    for (int i = 1; i <= student_num; i++)
    {
        printf("Enter student%d reg number: ", i);
        scanf("%d", &reg_num);

        printf("Enter student%d score: ", i);
        scanf("%f", &score);

        if (score >= init_score)
        {
            init_score = score;

            if (init_score >= 8)
            {
                final_reg = reg_num;
            }
        }
    }

    if (init_score >= 8)
    {
        printf("Reg number %d is selected\n", final_reg);
    }

    else
    {
        printf("Minimum note not reached\n");
    }
}