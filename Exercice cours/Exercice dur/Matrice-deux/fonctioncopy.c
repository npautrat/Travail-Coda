#include <stdlib.h>
#include <string.h>

char *str_cpy(char *str) 
{
    int a = strlen(str); 
    
    char *cpy = malloc((a + 1) * sizeof(char)); 
    cpy[a] = '\0'; 
    int i = 0; 
    while (i < a)
    {
        cpy[i] = str[i]; 
        i++; 
    }
    
    return cpy;
}