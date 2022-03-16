#include <stdio.h>
#include <string.h>

int main()
{
    char input[6]; 
    char placeholder[6];

    printf("Player 1, enter a word of no more than 6 letters:\n");
    fgets(input, 255, stdin);

    for (int i = 0; i < strlen(input) - 2; i ++)
    {
        placeholder[i] = '_';
    }

    for (int i = 0; i < strlen(placeholder) - 1; i++)
    {
        printf("%c", placeholder[i]);
        printf(" ");
    }

    memcpy(placeholder, input, sizeof(placeholder));
    printf("\n");

    return 0;
}