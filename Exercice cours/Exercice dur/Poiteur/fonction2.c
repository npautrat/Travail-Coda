#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
    int nbr_mot=0;
    for (int i=0;str[i]!='\0';i++)
    {
        if ((str[i]==' '||str[i]==39) && str[i+1]!=' ')
        {
            nbr_mot++;
        }
    }
    return (nbr_mot+1);
}