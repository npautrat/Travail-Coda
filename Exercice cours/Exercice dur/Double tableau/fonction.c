#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void print_tab(char** str_tab)
{
    int i=0;
    int taille=strlen(*str_tab);
    while (str_tab[i]!= NULL)
    {
        printf("[%d] %s\n",i,str_tab[i]);
        i++;
    }
}