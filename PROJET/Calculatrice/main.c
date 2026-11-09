#include <stdlib.h>
#include <stdio.h>
#include "operation.h"

int main()
{
    printf("Choisissez une opération parmis +, -, *, /, %%:\n");
    char i;
    int j;
    int k;
    scanf("%c", &i);
    printf("Choisissez vos nombres: \n");
    scanf("%d",&j);
    scanf("%d",&k);
    if (i=='+')
    {
        addition(j,k);
    }
    else if (i=='-')
    {
        soustraire(j,k);
    }
    else if (i=='/')
    {
        division(j,k);
    }
    else if (i=='*')
    {
        multiplication(j,k);
    }
    else 
    {
        modulo(j,k);
    }
    exit(0);
}