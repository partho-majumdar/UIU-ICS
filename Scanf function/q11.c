#include <stdio.h>

void main()
{
    int hour, minute, second;
    printf("Enter any second: ");
    scanf("%d", &second);

    hour = second / 3600;
    second = second % 3600;

    minute = second / 60;
    second = second % 60;

    printf("%d hour ", hour);
    printf("%d minute ", minute);
    printf("%d second", second);
}