#include <stdio.h>
#include <string.h>

void revert_words(char *str)
{
    int len = strlen(str) - 1;

    while (len >= 0)
    {
        if (len == 0 || str[len - 1] == ' ' || str[len - 1] == '\'')
        {
            if (str[len] != ' ' && str[len] != '\'')
            {
                int lenincrementation = len;
                while (str[lenincrementation] != '\0' && str[lenincrementation] != ' '  && str[lenincrementation] != '\'')
                {
                    printf("%c", str[lenincrementation]);
                    lenincrementation++;
                }
                printf(" ");
            }
        }
        len--;
    }
    printf("\n");
}