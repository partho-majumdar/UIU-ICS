#include <stdio.h>

void main()
{
    float s, u, a, t;

    printf("Enter the value of 'u': ");
    scanf("%f", &u);
    printf("Enter the value of 'a': ");
    scanf("%f", &a);
    printf("Enter the value of 't': ");
    scanf("%f", &t);
    s = u * t + 0.5 * a * t * t;
    printf("Answer: %d", (int)s);
}