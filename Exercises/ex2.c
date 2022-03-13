#include<stdio.h>
#include<string.h>

int main(){
    long value1 = 200000;
    long value2;

    /* Define the variable lPtr to be a pointer to a variable of type long.*/
    long * lPtr;

    /*Assign the address of variable value1 to pointer variable lPtr*/
    lPtr = &value1;

    /*Print the value of the variable pointed to by lPtr.*/
    printf("value 1 : %d\n", value1);

    /*Assign the value of the variable pointed to by lPtr to variable value2*/
    value2 = *lPtr;

    /*Print the value of value2*/
    printf("value 2 : %d\n", value2);

    /*Print the address of value1*/
    printf("value 1 address space : %d\n", &value1);

    /*Print the address stored in lPtr. Is the value printed the same as the address of value1*/
    printf("*lPtr address space : %d\n", lPtr);

    printf("value 2 address space : %d\n", &value2);

    return 0;
}