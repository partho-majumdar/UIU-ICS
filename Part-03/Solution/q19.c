#include <stdio.h>

void main()
{
    float first_term, mid_term, final, quiz, assignment, attendance;

    printf("Enter first term marks: ");
    scanf("%f", &first_term);

    printf("Enter mid term marks: ");
    scanf("%f", &mid_term);

    printf("Enter final marks: ");
    scanf("%f", &final);

    printf("Enter quiz marks: ");
    scanf("%f", &quiz);

    printf("Enter assignment marks: ");
    scanf("%f", &assignment);

    printf("Enter attendance marks: ");
    scanf("%f", &attendance);

    float first_term_marks = first_term * 0.20;
    float mid_term_marks = mid_term * 0.20;
    float final_marks = final * 0.35;
    float quiz_marks = quiz * 0.05;
    float assignment_marks = assignment * 0.15;
    float attendance_marks = attendance * 0.05;

    float score = first_term_marks + mid_term_marks + final_marks + quiz_marks + assignment_marks + attendance_marks;

    if (score >= 90)
    {
        printf("Overall Marks: %.2f\n", score);
        printf("Grade A");
    }

    else if (score < 90 && score >= 85)
    {
        printf("Overall Marks: %.2f\n", score);
        printf("Grade B+");
    }

    else if (score < 85 && score >= 80)
    {
        printf("Overall Marks: %.2f\n", score);
        printf("Grade B");
    }

    else if (score < 80 && score >= 75)
    {
        printf("Overall Marks: %.2f\n", score);
        printf("Grade C+");
    }

    else if (score < 75 && score >= 70)
    {
        printf("Overall Marks: %.2f\n", score);
        printf("Grade C");
    }

    else if (score < 70)
    {
        printf("Overall Marks: %.2f\n", score);
        printf("Grade F");
    }
}