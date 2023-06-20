//#include <stdio.h>   // стандарт input\output
//#include <string.h> // библиотека для работ со строками
//#include <stdlib.h>
//#include <time.h>

#include "global.h"
//#include "battle.c"

int main (void)
{  
    int player_gold = 0;
    char action;
    char nickname[10];

    short foo = 33000;

    printf("%hd\n\n\n", foo);
    
    hello(nickname); // nane of player 

    printf("You attacked by goblin. (A)'a'ttack or (R)'r'un\n");

    action = getchar();

    while (action != 'r')
    {
        if (action == 'a' || action == 'A')
        {
            player_gold = battle(player_gold); // battle proces 
        }

        printf("Next action? \n");
        getchar();
        action = getchar();

    }
    
    if (action == 'r')
        printf("You earned %d gold. Goog job! \n", player_gold);
    
    return 0;
}