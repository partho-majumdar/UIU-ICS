#include <stdio.h>
#include <math.h>

void main()
{
    float num;
    printf("Enter any value: ");
    scanf("%f", &num);
    printf("Floor of an number is: %d \n", (int)(floor)(num));
    printf("Celling of an number is: %d \n", (int)(ceil)(num));
}