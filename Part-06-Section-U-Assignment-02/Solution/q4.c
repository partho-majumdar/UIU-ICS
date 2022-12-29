#include <stdio.h>

void main()
{
    float input_salary, new_salary;

    printf("Enter salary: ");
    scanf("%f", &input_salary);

    if (input_salary >= 0 && input_salary <= 400.00)
    {
        new_salary = input_salary + (input_salary * 0.15);
        printf("New salary: %.f", new_salary);
    }

    else if (input_salary >= 400.01 && input_salary <= 800.00)
    {
        new_salary = input_salary + (input_salary * 0.12);
        printf("New salary: %.f", new_salary);
    }

    else if (input_salary >= 800.01 && input_salary <= 1200.00)
    {
        new_salary = input_salary + (input_salary * 0.10);
        printf("New salary: %.f", new_salary);
    }

    else if (input_salary >= 1200.01 && input_salary <= 2000.00)
    {
        new_salary = input_salary + (input_salary * 0.07);
        printf("New salary: %.f", new_salary);
    }

    else if (input_salary > 2000.00)
    {
        new_salary = input_salary + (input_salary * 0.04);
        printf("New salary: %.f", new_salary);
    }
}