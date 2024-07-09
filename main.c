#include <stdio.h>
#include <stdlib.h>

int main() {
    int play = -1;

    // while ((play != 1) && (play != 0))
    // {
        printf("\n\nWould you like to play Rock Paper Scissors?");
        printf("\nEnter '1' for Yes and '0' for No.\n");
        scanf("%d", &play);

        if (play == 0)
        {
            printf("Goodbye");
        }
    return 0;
}