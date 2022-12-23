#include <stdio.h>
#include <stdbool.h>

void main()
{
    int p1, p2;
    int pick_num, guess_num;

    printf("Player-01 picks a number: ");
    scanf("%d", &pick_num);

    int num_of_guess = 1;
    int total_guess = 3;

    while (num_of_guess <= total_guess)
    {
        printf("Player-02 guess any number: ");
        scanf("%d", &guess_num);

        if (guess_num > pick_num)
        {
            printf("You guess bigger number please enter less number \n");
        }

        else if (guess_num < pick_num)
        {
            printf("You guess less number enter any bigger number \n");
        }

        else if (guess_num == pick_num)
        {
            printf("Right, Player-02 wins! \n");
            break;
        }

        printf("Wrong, %d chances left! \n", total_guess - num_of_guess);

        num_of_guess += 1;
    }

    if (num_of_guess > 3)
    {
        printf("Game over! Player-01 wins! \n");
    }
}