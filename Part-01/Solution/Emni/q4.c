#include <stdio.h>

void main()
{
    int input_value;
    int temp = input_value;
    printf("Enter amount: ");
    scanf("%d", &input_value);

    int note_of_500 = input_value / 500;
    input_value = input_value % 500;

    int note_of_100 = input_value / 100;
    input_value = input_value % 100;

    int note_of_50 = input_value / 50;
    input_value = input_value % 50;

    int note_of_10 = input_value / 10;
    input_value = input_value % 10;

    int note_of_5 = input_value / 5;
    input_value = input_value % 5;

    int note_of_1 = input_value / 1;
    input_value = input_value % 1;

    printf("%d note of 500 \n", note_of_500);
    printf("%d note of 100 \n", note_of_100);
    printf("%d note of 50 \n", note_of_50);
    printf("%d note of 10 \n", note_of_10);
    printf("%d note of 5 \n", note_of_5);
    printf("%d note of 1 \n", note_of_1);
}