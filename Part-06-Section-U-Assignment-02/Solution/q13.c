#include <stdio.h>
#include <math.h>

void main()
{
    int num_of_friend, slice;

    printf("Enter friend number: ");
    scanf("%d", &num_of_friend);

    printf("Number of slice each friend needs: ");
    scanf("%d", &slice);

    float cake_needs = ((float)num_of_friend * (float)slice) / 4;
    int num_of_cake = ceil(cake_needs);

    printf("Ans: %d", num_of_cake);
}