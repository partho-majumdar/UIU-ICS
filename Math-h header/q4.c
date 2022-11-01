#include <stdio.h>
#include <math.h>

void main()
{
    float u, v, a, s;

    printf("Enter value of 'u': ");
    scanf("%f", &u);

    printf("Enter value of 'a': ");
    scanf("%f", &a);

    printf("Enter value of 's': ");
    scanf("%f", &s);

    v = sqrt((u * u) + (2 * a * s));
    printf("Value of V: %.2f", v);
}