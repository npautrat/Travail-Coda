#include <stddef.h>

void capitalize_words(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]+=32;
        }
        if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\'') && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] -= 32;
        }
        i++;
        
    }
}