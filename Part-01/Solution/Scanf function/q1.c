#include <stdio.h>

void main()
{
    int a;
    float b;

    printf("Enter any integer value: ");
    scanf("%d", &a);
    printf("Integer value = %d \n", a);

    printf("Enter any floating point value: ");
    scanf("%f", &b);
    printf("Integer value = %.3f", b);
}