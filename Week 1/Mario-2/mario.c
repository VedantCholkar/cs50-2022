#include <stdio.h>

int main(void)
{
    int user_input = 0;
    do
    {
        printf("Height: ");
        scanf("%i", &user_input);
    } while (user_input < 1 || user_input > 8);

    for (int rows_left = 0; rows_left < user_input; rows_left++)
    {
        for (int columns_finished = rows_left + 1; columns_finished < user_input; columns_finished++)
        {
            printf(" ");
        }
        for (int colums_left = 0; colums_left < rows_left + 1; colums_left++)
        {
            printf("#");
        }
        printf("  ");
        for (int colums_left2 = 0; colums_left2 < rows_left + 1; colums_left2++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// #include <stdio.h>

// int main(void)
// {
//     int user_input = 0;
//     do
//     {
//         printf("Height: ");
//         scanf("%i", &user_input);
//     } while (user_input < 1 || user_input > 8);

//     for (int rows_left = 0; rows_left < user_input; rows_left++)
//     {
//         for (int i = 0; i < rows_left+1; i++)
//         {
//             printf("#");
//         }

//         printf("\n");
//     }
// }

/*
Psudocode
Input: A number between 1 and 8
Output: A pyramid made of '#' with input number of columns

First Step
    Take user input
    Check if the input is between 1 & 8
    If not, reprompt the user

Second step
    Make the rows
    Make the column
    Make the box into a pyramid
    Right align the pyramid

Third step
    Todo Make a left-aligned pyramid
    Add a space between the 2 pyramids
*/
