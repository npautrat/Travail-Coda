#include <stdlib.h>
#include <stdio.h>

int str_len(char *str)
{
    int taille;
    printf("%s",str);
    taille=sizeof(str)/sizeof(str[0]);
    return(taille);
}

int main()
{
    char *str="Hello World\n";
    int a=str_len(str);
    printf("La taille de notre chaine de charactère fait: %d\n",a);
    exit(0);
} 


