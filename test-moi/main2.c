#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("Boucle do while: %d\n",i);
        i++;
    }while (0);
    printf("Après la boucle do while: %d\n",i);
    exit(0);
}
