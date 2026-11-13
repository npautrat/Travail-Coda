#include <stdlib.h>
#include <stdio.h>
int main()
{
    printf("Choisissez une opération parmis +, -, *, /, %%:\n");
    char i;
    scanf("%c", &i);
    if (i=='+')
    {
        printf("Votre opération est une addition\n");
    }
    else if (i=='-')
    {
        printf("Votre opération est une soustraction\n");
    }
    else if (i=='/')
    {
        printf("Votre opération est une division \n");
    }
    else if (i=='*')
    {
        printf("Votre opération est une multiplication \n");
    }
    else 
    {
        printf("Votre opération est un modulo\n");
    }
    exit(0);
}
