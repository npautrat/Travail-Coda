#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int br;
    int found=0;
    int nbr_essaie=1;
    printf("\nLe but de ce jeu est que vous trouviez le numéro mystère, le nombre est contenu entre 1 et 100 inclus, a vous de jouer !\n\n");
    while (found==0)
    {
        printf(" - ");
        scanf("%d",&br);
        if (br==random_number && nbr_essaie==1)
        {
            found++;
            printf("Ptn tu es une bête first try\n");
            exit(0);
        }
        else if (br==random_number)
        {   
            found++;
            printf("Bien joué a vous vous avez trouvé\n");
        }
        else if (br>random_number)
        {
            nbr_essaie++;
            printf("Votre nombre est au dessus du nombre mystère\n");
        }
        else if (br<=0 || br>=101)
        {   
            nbr_essaie++;
            printf("Le nombre est forcement entre 1 et 100 inclus\n");
        }
        else 
        {
            nbr_essaie++;
            printf("Votre nombre est en dessous du nombre mystère\n");
        }
    }
    printf("Voici votre nombre d'essaie: %d\n\n",nbr_essaie);
}