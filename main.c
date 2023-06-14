#include <stdio.h>   // стандарт input\output
#include <string.h> // библиотека для работ со строками

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

int main (void)
{
    int player_gold = 0;
    char action;
    char nickname[10];

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