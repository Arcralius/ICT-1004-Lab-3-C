#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char[]);

int main()
{
    char word[12], player2guess[2], placeholder[12];
    int checktof;
    int wlength, plength, gotchange, notequal;
    int player2rounds = 7;

    printf("Player 1, enter a word of no more than 12 letters:\n");
    scanf("%s", &word);
    checktof = check(word);

    while (checktof == 0)
    {
        printf("Sorry, the word must contain only English letters.\n");
        printf("Player 1, enter a word of no more than 12 letters:\n");
        scanf(" %s", &word);
        checktof = check(word);
    }

    wlength = strlen(word);

    for (int i = 0; i < wlength; i++)
    {
        word[i] = tolower(word[i]);
    }

    memcpy(placeholder, word, sizeof(placeholder));

    plength = strlen(placeholder);

    for (int i = 0; i < plength; i++)
    {
        placeholder[i] = '_';
    }

    while (player2rounds != 0)
    {
        printf("Player 2 has so far guessed: %s\n", placeholder);
        printf("Player 2, you have %i guesses remaining. Enter your next guess:\n", player2rounds);
        scanf("%s", &player2guess);
        player2guess[0] = tolower(player2guess[0]);
        gotchange = 0;
        notequal = 0;

        for (int b = 0; b < wlength; b++)
        {
            if (player2guess[0] == word[b])
            {
                placeholder[b] = word[b];
                gotchange = 1;
            }
        }

        if (gotchange == 0)
        {
            player2rounds--;
        }
        else
        {
            for (int c = 0; c < wlength; c++)
            {
                if (placeholder[c] != word[c])
                {
                    notequal = 1;
                }
            }

            if (notequal != 1)
            {
                printf("Player 2 has so far guessed: %s\n", placeholder);
                printf("Player 2 wins.");
                break;
            }
        }
        if (player2rounds == 0)
        {
            printf("Player 2 has so far guessed: %s\n", placeholder);
            printf("Player 1 wins.");
        }
    }

    return 0;
}

int check(char word[])
{
    int wlength;

    wlength = strlen(word);

    for (int a = 0; a < wlength; a++)
    {
        if (isalpha(word[a]) == 0)
        {
            return 0;
        }
    }
    return 1;
}