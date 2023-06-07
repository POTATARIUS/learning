#include <stdio.h>   // стандарт input\output
#include <string.h> // библиотека для работ со строками

int main (void)
{
    int c;
    int len;
    int goblin_gold = 15;
    int goblin_hp = 3;
    int player_gold = 0;
    char action;
    char nickname[10];

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

    printf("It's a good weather tooday.\n");

    printf("You attacked by goblin. Goblin HP is %d (A)'a'ttack or (R)'r'un\n", goblin_hp);

    action = getchar();

    while (action != 'r')
    {
        if (action == 'a' || action == 'A')
        {
            for (goblin_hp = 3; goblin_hp >= 0; goblin_hp--)
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
        }

        getchar();
        printf("Next action? \n");
        action = getchar();

    }
    
    if (action == 'r')
        printf("You've decided to run away. \n");
    
    return 0;
}