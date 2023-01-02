#include <stdio.h>
#include <math.h>

void main()
{
    int level_remaining, time_to_complete, break_time, ans;

    printf("Enter how many level remaining: ");
    scanf("%d", &level_remaining);

    printf("Time to complete each level: ");
    scanf("%d", &time_to_complete);

    printf("Break time: ");
    scanf("%d", &break_time);

    if (level_remaining >= 0)
    {
        if (level_remaining > 3)
        {
            float new_level_remaining = (float)(level_remaining - 3) / 3;

            int level_for_break = ceil(new_level_remaining);

            ans = (level_remaining * time_to_complete) + (level_for_break * break_time);
        }

        else
        {
            ans = (level_remaining * time_to_complete);
        }

        printf("Total time: %d minute", ans);
    }

    else
    {
        printf("Level can't be negative");
    }
}