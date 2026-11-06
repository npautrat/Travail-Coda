#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    int br;
    random_number = 67;
    int found=0;
    printf("%d\n",random_number);
    int nbr_essaie=1;
    printf("Le but de ce jeu est que vous trouviez le numéro mystère, le nombre est contenu entre 0 et 100, a vous de jouer !\n\n");
    
    if (random_number==42)
    {
        printf("Quelle est le sens de la vie:\n - ");
        scanf("%d",&br);
        if (br==42)
        {
            printf("Bien joué tu a trouvé le sens de la vie\n");
            exit(0);
        }
        else
        {
            printf("Fait un effort s'il te plait\n");
        }
    }
    if (random_number==67)
    {
        printf("Je te donne un indice le nombre est très cringe:\n - ");
        scanf("%d",&br);
        if (br==67)
        {
            printf("Bien joué je vois que tu est sortie de chez toi cette dernière année\n");
            exit(0);
        }
        else
        {
            printf("Tu vis dans une grotte ?\n");
        }
    }
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
        else 
        {
            nbr_essaie++;
            printf("Votre nombre est en dessous du nombre mystère\n");
        }
    }
    printf("Voici votre nombre d'essaie: %d\n",nbr_essaie);
}