#include <stdio.h>
#include <string.h>

int main()
{
    int *zPtr; /* zPtr will reference array z */
    char z[5] = "hi";
    int intz[5];

    for (int i = 0; i < strlen(z); i++)
    {
        intz[i] = z[i];
    }
    
    zPtr = intz;

    printf("%d\n", * zPtr);

    /* print the entire array z */
    for (int i = 0; i < strlen(z); i++)
    {
        printf("%d \n", *(zPtr + i));
    }

    return 0;
}