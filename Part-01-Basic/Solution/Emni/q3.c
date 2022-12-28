#include <stdio.h>

void main()
{
    int input_value;

    printf("Enter value in seconds: ");
    scanf("%d", &input_value);

    int hour = input_value / 3600;
    int second = input_value % 3600;

    int minute = second / 60;
    second = second % 60;

    printf("%d hour %d minute %d second", hour, minute, second);
}