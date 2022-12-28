#include <stdio.h>

void main()
{
    float basic_salary;
    float hra, pba, gross_salary;

    scanf("%f", &basic_salary);

    if (basic_salary <= 10000)
    {
        hra = basic_salary * 0.2;
        pba = basic_salary * 0.8;
        gross_salary = basic_salary + hra + pba;
        printf("gross salary: %f", gross_salary);
    }

    else if (basic_salary <= 20000)
    {
        hra = basic_salary * 0.25;
        pba = basic_salary * 0.9;
        gross_salary = basic_salary + hra + pba;
        printf("gross salary: %f", gross_salary);
    }

    else if (basic_salary > 20000)
    {
        hra = basic_salary * 0.3;
        pba = basic_salary * 0.95;
        gross_salary = basic_salary + hra + pba;
        printf("gross salary: %f", gross_salary);
    }
}