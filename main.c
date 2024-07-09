#include <stdio.h>
#include <stdlib.h>

int main() {
    int play = -1;          //boolean val to play or not
    int user = 0;           //User choice
    printf("\n\nWould you like to play Rock Paper Scissors?");
    printf("\nEnter [1] for Yes and [0] for No:\t");
    scanf("%d", &play);     //Takes user input to play or not

    if (play == 1)      //Begins game
    {
        printf("\n\nEnter a number to choose.\n[1] for Rock\n"
                "[2] for Paper\n[3] for Scissors:\t");
        scanf("%d", &user);
        printf("You chose %d", user);
    }
    else if (play == 0) //Says bye to user if they don't want to play
    {
        printf("Goodbye");
    }
    return 0;
}