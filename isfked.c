#include <stdio.h>
#include <ctype.h>
#include <string.h>

// int testspace(char input[255])
// {
//     int inputint[255];
//     int length = strlen(input);
//     int *inputPtr;
//     int check = 0;

//     for (int i = 0; i < length; i++)
//     {
//         inputint[i] = input[i];
//     }

//     inputPtr = inputint;

//     for (int i = 0; i < length; i++)
//     {
//         if (*(inputPtr + i) == 32)
//         {
//             check++;
//         }
//         else
//         {
//             continue;
//         }
//     }

//     if (check == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

void printplaceholer(char placeholder[255])
{
    for (int i = 0; i < strlen(placeholder); i++)
    {
        printf("%c", placeholder[i]);
        printf(" ");
    }
}

int main()
{
    char input[255];
    char placeholder[255];
    char pattern[255];
    int isspace;
    int guesscorrect = 0;
    int counter = 7;

    printf("Player 1, enter a word of no more than 6 letters:\n");
    fgets(input, 255, stdin);
    printf("pre lower input is %d\n", strlen(input));

    // isspace = testspace(input);

    for (int i = 0; i < strlen(input) - 1; i++)
    {
        input[i] = tolower(input[i]);
    }

    printf("post lower is %d\n", strlen(input));

    if (isspace == 0)
    {
        printf("Sorry, the word must contain only words.\n");
        return 0;
    }

    if (strlen(input) > 7)
    {
        printf("Player 1, enter a word of no more than 6 letters!\n");
        return 0;
    }

    if (strlen(input) == 1)
    {
        printf("Not valid input\n");
        return 0;
    }
  
    printf("preloop  lower is %d\n", strlen(input));
  
    for (int i = 0; i < strlen(input) - 1; i++)
    {
        printf("i is %d\n", i);
        placeholder[i] = '_';
    }
    printf("placeholer strlen is %d\n", strlen(placeholder));
    printplaceholer(placeholder);

UWU:
// while (counter != 0)
// {
//     printf("%d", guesscorrect);
//     if (guesscorrect == (strlen(input) - 1))
//     {
//         printplaceholer(placeholder);
//         printf("\n");

//         printf("Player 2 Won!\n");
//         return 0;
//     }
//     else
//     {
//         guesscorrect = 0;
//     }

//     printf("Player 2, you have %d guesses remaining. Enter your next guess:\n", counter);

//     printplaceholer(placeholder);

//     printf("\n");

//     fgets(pattern, 255, stdin);

//     while (strlen(pattern) - 1 != 1)
//     {
//         printf("Only 1 character is allowed.\n");
//         fgets(pattern, 255, stdin);
//     }

//     for (int i = 0; i < strlen(input) - 1; i++)
//     {
//         if (*pattern == *(CPtr + i))
//         {
//             for (int i = 0; i < strlen(input) - 1; i++)
//             {
//                 if (*pattern == *(CPtr + i))
//                 {
//                     *(placeholder + i) = pattern[0];
//                     for (int i = 0; i < strlen(placeholder) - 1; i++)
//                     {
//                         if (placeholder[i] != '_')
//                         {
//                             guesscorrect++;
//                         }
//                     }
//                 }
//             }
//             goto UWU;
//             ;
//         }
//     }
//     counter--;
// }

    printf("Player 2 Lost. =(\n");
    return 0;
}