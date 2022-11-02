#include <stdio.h>

void main()
{
    float feet, inch;

    printf("Enter value in inches: ");
    scanf("%f", &inch);

    feet = inch * 0.083333333;

    int integer_val = (int)feet;
    float float_val = (feet - integer_val);

    printf("%d feet %.2f inch", integer_val, float_val);
}