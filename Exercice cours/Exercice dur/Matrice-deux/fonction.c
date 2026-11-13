#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int count_tab(char ** tab)
{
    int compteur = 0;
    int i= 0;
    while (tab[i]!=NULL)
    {
        compteur++;
        i++;
    }
    return (compteur);
}