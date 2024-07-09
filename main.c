#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void incorrect() {
    printf("\nPlease choose a valid option next time.");
}

int playAgain() {
    int choice;

    printf("\n\nWould you like to play Rock Paper Scissors?");
    printf("\nEnter [1] for Yes and [0] for No:\t");
    scanf("%d", &choice);     //Takes user input to play or not

    return choice;
}

int main() {
    int user = 0;              //User choice
    srand(time(NULL));
    int comp;              //Computer choice
    char items[3][9] = {"Rock", "Paper", "Scissors"};  //List of items
    int wins = 0;
    int loses = 0;
    int ties = 0;

    int play = playAgain();         //boolean val to play or not

    while ((play != 1) && (play != 0)) {
        incorrect();
        play = playAgain();
    }
    
    while(play == 1)      //Begins game
    {
        comp = rand() % 3;      //Computer randomly chooses
        while((user != 1) && (user != 2) && (user != 3))
        {
            incorrect();
            printf("\n\nEnter a number to choose.\n[1] for Rock\n"
                "[2] for Paper\n[3] for Scissors:\t");
            scanf("%d", &user);     //User chooses rock, paper, or scissors
        }
        user -= 1;
        if (user == comp)
        {
            printf("%s ties %s\nNo Winner", items[user], items[comp]);
            ties++;
        }
        else if (user > comp) {
            if ((user == 2) && (comp == 0)) {
                printf("%s loses to %s\nYou lose :(", items[user], items[comp]);
                loses++;
            }
            else {
                printf("%s beats %s\nYou Win! :)", items[user], items[comp]);
                wins++;
            }
        }
        else {
            if ((user == 0) && (comp == 2)) {
                printf("%s beats %s\nYou Win! :)", items[user], items[comp]);
                wins++;
            }
            else {
                printf("%s loses to %s\nYou lose :(", items[user], items[comp]);
                loses++;
            }
        }
        printf("\nYour record\nWins: %d   Loses: %d   Ties:%d", wins, loses, ties);

        play = playAgain();
    }

    printf("\nGoodbye");
    return 0;
}