//#include <stdio.h>
#include "global.h"

int battle(int player_gold)
{
    srand(time(NULL)); // seed. rng 0-2kkk

    int goblin_gold = rand() % 20;
    int goblin_hp = rand() % 5;
    int goblin_hp_new = goblin_hp;
    for (goblin_hp_new; goblin_hp_new >= 0; goblin_hp_new--)
    {
        if (goblin_hp_new != goblin_hp)
            printf("You kick goblin. Goblin HP: %d \n", goblin_hp_new);

        if (goblin_hp_new == 0)
        {
            printf("You defeat Goblin. \n");

            player_gold += goblin_gold;

            printf("You found %d gold. You have %d gold total. \n", goblin_gold, player_gold);
            break;
        }
    }
    
    return player_gold;
}

int hello(char *nickname)
{
    int c;
    int len;

    printf("What is your name?\n");
    printf("Enter your name: ");

//  scanf("%9s", nickname);

    fgets(nickname, sizeof(nickname), stdin);

    len = strlen(nickname);

    if (nickname[len - 1] == '\n')                     // clear buff if short input
        nickname[len - 1] = '\0';
    else                                             // clear buff if long input
        while ((c = getchar()) != '\n' && c != EOF) // clear buffer
            ;

    printf("Hello %s\n", nickname);

    return 0;
}