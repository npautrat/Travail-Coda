#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char mdp[50]="Simba2304&";
    char test[50]="";
    int found = 0;
    int a=0;
    int Coins[12][10] = {
        {50, 20, 100, 15, 80, 45, 60, 30, 25, 70},
        {10, 20, 10, 15, 50, 5, 40, 12, 85, 90},
        {100, 200, 150, 30, 40, 50, 90, 120, 80, 70},
        {5, 12, 8, 19, 25, 33, 41, 50, 62, 75},
        {500, 250, 100, 50, 25, 10, 5, 1, 300, 150},
        {14, 28, 42, 56, 70, 84, 98, 112, 126, 140},
        {99, 88, 77, 66, 55, 44, 33, 22, 11, 5},
        {10, 10, 20, 20, 30, 30, 40, 40, 50, 50},
        {7, 14, 21, 28, 35, 42, 49, 56, 63, 70},
        {88, 12, 44, 55, 66, 77, 99, 11, 22, 33},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {150, 250, 350, 450, 550, 650, 750, 850, 950, 1050}
    };
    while (found==0)
    {
        printf("Entrée votre mot de passe: \n");
        scanf("%s",test);
        if (strcmp(test,mdp)==0)
        {
            printf("Bon mot de passe\n Bienvenue dans votre espace de stockage\n");
            found++;
            break;
        }
        else
        {
            printf("Mot de passe mauvais voyez retry\n");
        }
    }

    for (int i=0;i<sizeof(Coins[0])/sizeof(Coins[0][0]);i++)
    {
        a+=Coins[0][i];
    };
    printf("\nVotre sac d'or contien %d $\n\n",a);
    
    for (int i=0;i<sizeof(Coins)/sizeof(Coins[0]);i++)
    {   
        int p =sizeof(Coins[i])/sizeof(Coins[i][0]);
        if (sizeof(Coins[i])/sizeof(Coins[i][0])>=10)
        {
            a=0;
            for (int j=0;j<sizeof(Coins[0])/sizeof(Coins[0][0]);j++)
            {
                a+=Coins[i][j];
            }
            printf("Le coffre n°%d contient %d $\n",i+1,a);
        };
    }
    
    int* ptr=&Coins[0][0];
    
    printf("\nLe première élement du coffre est: %d\n\nLes adresses mémoires sont les suivante:\n ", *ptr);

    for (int i=0;i<10;i++)
    {
        printf("- %p\n ",(ptr+i));
    }
    printf("\n");
    int *ptr=ptr;
    int **ptr=999
    print(Coins[0][0])
    exit(0);
}