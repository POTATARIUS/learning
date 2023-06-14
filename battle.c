#include <stdio.h>
#include "battle.h"

int battle(int player_gold)
{
    int goblin_gold = 15;

    for (int goblin_hp = 3; goblin_hp >= 0; goblin_hp--)
    {
        if (goblin_hp != 3)
            printf("You kick goblin. Goblin HP: %d \n", goblin_hp);

        if (goblin_hp == 0)
        {
            printf("You defeat Goblin. \n");

            player_gold += goblin_gold;

            printf("You found %d gold. You have %d gold total. \n", goblin_gold, player_gold);
            break;
        }
    }
    
    return player_gold;
}
