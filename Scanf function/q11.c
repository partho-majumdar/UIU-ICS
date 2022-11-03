#include <stdio.h>

void main()
{
    int input_value, hour, minute, second;
    printf("Enter any second: ");
    scanf("%d", &input_value);

    hour = input_value / 3600;   // 525 / 3600 =-> 0
    second = input_value % 3600; // 525 % 3600 = 525

    minute = second / 60; // 525 / 60 =-> 8

    second = second % 60; // 525 % 60 =-> 44

    printf("%d hour ", hour);
    printf("%d minute ", minute);
    printf("%d second", second);
}