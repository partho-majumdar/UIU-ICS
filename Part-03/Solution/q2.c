#include <stdio.h>

void main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int sum = n1 + n2;

    if (sum > 100 && sum < 200 && sum % 7 == 0)
    {
        printf("First --> %d and %d are greater than 100 and less than 200 those are divisible by 7", n1, n2);
    }

    else
    {
        printf("Second --> %d and %d are greater than 100 and less than 200 those are not divisible by 7", n1, n2);
    }
}
