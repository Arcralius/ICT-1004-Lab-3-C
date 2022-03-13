#include <stdio.h>
#include <string.h>

int main()
{
    int *zPtr; /* zPtr will reference array z */
    int *aPtr = NULL;
    void *sPtr = NULL;
    int number, i;
    int z[5] = {420, 69, 3, 4, 5};
    zPtr = z;
    sPtr = z;

    /* use a pointer to get the first value of array */
    number =* zPtr;

    printf("%d\n", number);

    /* assign array element 2 (the value 3) to number */
    number = *(zPtr + 1);
    printf("You'd think that zPtr is just 1+1 but no it is actually: %d\n", number);

    /* print the entire array z */
    for (i = 0; i < 5; i++)
    {
        printf("%d \n", *(zPtr + i));
    }

    return 0;
}