#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i;
    printf("Entrez un nombre :");
    scanf("%d", &i);
    if (i==42)
    {
        printf("Votre nombre est 42\n");
    }
    else if (i>=42)
    {
        printf("%d est supérieur à 42\n",i);
    }
    else
    {
        printf("%d est inférieur à 42\n",i);
    }
    exit(0);
}