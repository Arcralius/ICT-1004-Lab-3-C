#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int checkspace(char input[10])
{
    int gotspace = 0;
    char *inputPtr;
    inputPtr = NULL;
    inputPtr = input;

    for (int i = 0; i < strlen(input); i++)
    {
        if (*(inputPtr + i) == 32)
        {
            gotspace = 1;
        }
    }

    free(inputPtr);

    if (gotspace)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int checklength(char input[10], int length)
{
    if (strlen(input) - 1 > length)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printplaceholder(char placeholder[10], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        printf("%c", placeholder[i]);
        printf(" ");
    }
    printf("\n");
}

int checkfinal(char placeholder[10], int len)
{
    int counter = 0;
    for (int i = 0; i < len; i++)
    {
        if (placeholder[i] != 95)
        {
            counter++;
        }
    }

    if (counter == len)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char input[10];
    char placeholder[10];
    char pattern[10];
    int counter = 7;
    int match = 0;

    printf("Player 1, enter a word of no more than 6 letters:\n");
    fgets(input, 10, stdin);

    for (int i = 0; i < strlen(input); i++)
    {
        input[i] = tolower(input[i]);
    }

    if (checkspace(input))
    {
        printf("Word cannot have spaces!\n");
        return 0;
    }

    if (checklength(input, 6))
    {
        printf("Word is more than 6 letters!\n");
        return 0;
    }

    for (int i = 0; i < strlen(input); i++)
    {
        placeholder[i] = '_';
    }

    while (counter != 0)
    {
        match = 0;
        printf("Player 2, you have %d guesses remaining. Enter your next guess:\n", counter);
        printplaceholder(placeholder, strlen(input));
        fgets(pattern, 10, stdin);

        while (strlen(pattern) - 1 != 1)
        {
            printf("Only 1 character is allowed.\n");
            fgets(pattern, 10, stdin);
        }

        pattern[0] = tolower(pattern[0]);


        for (int i = 0; i < strlen(input); i++)
        {
            if (pattern[0] == input[i])
            {
                placeholder[i] = pattern[0];
                match = 1;
            }
        }

        if (checkfinal(placeholder, strlen(input) - 1) == 1)
        {
            break;
        }

        if (match == 0)
        {
            counter--;
        }
    }

    if (counter == 0)
    {
        printf("Player 2 loses.\n");
        return 0;
    }
    else
    {
        printf("Player 2 Wins!\n");
        return 0;
    }
}