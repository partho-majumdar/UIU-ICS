#include <stdio.h>

void main()
{
    float val1, val2, val3;

    printf("Enter first value: ");
    scanf("%f", &val1);

    printf("Enter second value: ");
    scanf("%f", &val2);

    printf("Enter third value: ");
    scanf("%f", &val3);

    float first_with_weight = val1 * 2;
    float second_with_weight = val2 * 3;
    float third_with_weight = val3 * 5;

    float sum_with_weight = first_with_weight + second_with_weight + third_with_weight;

    float average = (sum_with_weight) / (2 + 3 + 5);

    printf("Answer: %.1f", average);
}