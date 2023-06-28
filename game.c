#include "game.h"
#include "functions.h"

int game (void)
{
    int player_gold = 0;
    char action;
    char username[10];
    char nickname[10];
    
    hello(username, sizeof(username)); // name of player 

    printf("Hi, %s! What do you want to do today?"
           "Go to the forest to 'h'unt goblins or to drink "
           "ale in the 't'avern or 'q'uit?\n", username);

    action = getchar(); /// A -> [Enter] (don't forget to wipe buffer)

    while (action != 'q')
    {
        if (action == 'h' || action == 'H')
        {
            player_gold = battle(player_gold); // battle proces 
        }

        else if (action == 't')
        {
            player_gold = tavern(player_gold); // battle proces  
        }
        printf("Next action? 'H'unt or 't'avern or 'q'uit?\n");
        getchar();
        action = getchar();

    }
    
    if (action == 'q')
        printf("You earned %d gold. Goog job! See you tomorrow!\n", player_gold);

    return 0;
}