#include <stdio.h>
#include <string.h>
#include "fonction.h"

int sort_numbers(int *nb1,char *trie)
{
    int taille = 5;
    int i = 0;
    while (i < taille - 1)
    {
        if (nb1[i] > nb1[i + 1])
        {
            int temp = nb1[i + 1];
            nb1[i + 1] = nb1[i];
            nb1[i] = temp;
            if (i != 0)
            {
                i--;
                continue;
            }
        }
        i++;
    }

    printf("\n");
    if (strcmp(trie, "desc") == 0)
    {
        int j=taille;
        while (j>0)
        {
            printf("desc: ");
            printf("%d ",nb1[j]);
            j--;
        }
    }
    else
    {
        printf("asc: ");
        int j=0;
        while (j<taille)
        {
            
            printf("%d ",nb1[j]);
            j++;
        }
        return 0;
    }
    
}