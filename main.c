#include <stdio.h> // стандарт input\output
#include <string.h> // библиотека для работ со строками

int main (void)
{   
    int len;
    char nickname[8];

    printf("What is your name?\n");
    printf("Enter your name: ");

// scanf("%7[^\n]", nickname); // ' ', \n, \t

    fgets(nickname, sizeof(nickname), stdin);

    len = strlen(nickname) -1;

    if (nickname[len] == 10)
        nickname[len] = 0;

    printf("Hello %s\n", nickname);

    printf("It's a good weather tooday.\n");

    return 0;
}
/*

    int goblin_gold = 15;
    int goblin_hp = 3;
    int player_gold = 0;
    char action;

    printf("You attacked by goblin. Goblin HP is %d (A)ttack or 'r'un\n", goblin_hp);

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

*/
