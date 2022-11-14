#include <stdio.h>
// #include <math.h>

void main()
{
    // float a = 21, b = 15, c = 34, d = 6, result;
    // int result, a = 21, b = 15, c = 34, d = 6;

    // result = a * b + (a - c) / d + b;

    // int final_ans = (result) - 1;

    // printf("Answer %d", result);
    // printf("Answer %d", final_ans);

    int result, a = 21, b = 15, c = 34, d = 6;

    result = (float)a * b + (float)(a - c) / d + (float)b;

    printf("Answer: %d", result);
}
