#include <stdlib.h>
#include <string.h>

char * concat_tab(char ** tab)
{
    int i = 0;
    int a = 0;
    while (tab[i] != NULL)
    {
        a += strlen(tab[i])+1;
        i++;
    }
    char * phrase = malloc((a + 1) * sizeof(char));
    i = 0;
    int j = 0;
    int index_phrase = 0; 
    while (tab[i] != NULL)
    {
        j = 0;
        while (tab[i][j] != '\0') 
        {
            phrase[index_phrase] = tab[i][j];
            index_phrase++;
            j++;
        }
        phrase[index_phrase] = ' ';
        index_phrase++;
        i++;
    }
    phrase[index_phrase] = '\0';

    return phrase;
}