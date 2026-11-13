#include <stdlib.h>
#include <stdio.h>
#include "operation.h"

int main()
{
    int i=0;
    int nb1=0;
    do {
        int j=nb1;
        printf("DIt moi un nombre\n");
        scanf("%d",nb1);
        nb1= add(j,nb1);
        i++;
        printf("Valeur: %d",nb1)
    }while(i!=0)*
    printf("Fin des opérations\n")
}