#include <stdio.h>

void main()
{
    int elective_course, core_course, optional_course;

    printf("Enter elective course: ");
    scanf("%d", &elective_course);

    printf("Enter core course: ");
    scanf("%d", &core_course);

    printf("Enter optional course: ");
    scanf("%d", &optional_course);

    int credit_obtain_in_elective_course = elective_course * 4;

    int credit_obtain_in_core_course = core_course * 2;

    int credit_obtain_in_optional_course = optional_course * 0;

    int total_credit_obtain = credit_obtain_in_elective_course + credit_obtain_in_core_course + credit_obtain_in_optional_course;

    printf("Ans: %d", total_credit_obtain);
}
