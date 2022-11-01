#include <stdio.h>

void main()
{
    float u, v, a, t;
    printf("Enter the value of 'u': ");
    scanf("%f", &u);
    printf("Enter the value of 'a': ");
    scanf("%f", &a);
    printf("Enter the value of 't': ");
    scanf("%f", &t);

    v = u + (a * t);
    printf("Answer: %d", (int)v);
}