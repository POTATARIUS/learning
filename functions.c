#include "functions.h"

int tavern(int player_gold)
{
    int ale_mug_cost = 3;
    
    if ( player_gold >= 3)
    {
        player_gold -= ale_mug_cost;
        printf("You've bought mug of ale for %d gold!"
                    "Now you  have  %d gold  left\n", ale_mug_cost, player_gold); 
    }
    else
        printf("You don't have enough gold to buy an ale:( \n");

    return player_gold;
}

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

int hello(char *nickname, int buffer_size)
{
    int c;
    int len;

    printf("What's your name?\n");
    printf("Enter your name: ");

//  scanf("%9s", nickname);

    fgets(nickname, buffer_size, stdin);

    len = strlen(nickname);

    if (nickname[len - 1] == '\n')                     // clear buff if short input
        nickname[len - 1] = '\0';
    else                                             // clear buff if long input
        while ((c = getchar()) != '\n' && c != EOF) // clear buffer
            ;

    printf("Hello %s\n", nickname);

    return 0;
}