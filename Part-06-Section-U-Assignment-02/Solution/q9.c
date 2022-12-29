#include <stdio.h>

void main()
{
    int input_value;

    printf("Enter any number: ");
    scanf("%d", &input_value);

    for (int i = 1, j = 1; i <= input_value; i++, j++)
    {
        int value = j;
        int square_value = j * j;
        int cube_value = j * j * j;

        printf("%2d %3d %4d\n", value, square_value, cube_value);
    }
}