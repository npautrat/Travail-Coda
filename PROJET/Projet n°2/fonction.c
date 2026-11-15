#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void copy_numbers(char *source, char *numbers, int length)
{
    int i = 0;

    while (i < length)
    {
        numbers[i] = source[i];
        i = i + 1;
    }
}

int is_victory(int *grille_played_current)
{
    for (int i = 0; i < 9; i += 3)
    {
        if (grille_played_current[i] != 0 && grille_played_current[i] == grille_played_current[1 + i] && grille_played_current[1 + i] == grille_played_current[2 + i])
        {
            return (1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (grille_played_current[i] != 0 && grille_played_current[i] == grille_played_current[3 + i] && grille_played_current[3 + i] == grille_played_current[6 + i])
        {
            return (1);
        }
    }
    if (grille_played_current[4] != 0 && ((grille_played_current[0] == grille_played_current[4] && grille_played_current[4] == grille_played_current[8]) ||
        (grille_played_current[6] == grille_played_current[4] && grille_played_current[4] == grille_played_current[2])))
    {
        return (1);
    }

    return (0);
}

void player_one_round_to_play(char **grille_actually_played, int *grille_played_current)
{
    int case_played_player;

    case_played_player = -1;
    while (case_played_player < 0 || case_played_player > 8 || grille_played_current[case_played_player]!=0)
    {
        printf("Joueur 1: Choisissez votre case parmis ceux dispo: \n- ");
        scanf("%d", &case_played_player);
        if (case_played_player < 0 || case_played_player > 8)
            printf("Choisis entre 1 et 8 stp\n");
        else if (grille_played_current[case_played_player]!=0)
        {
            printf("Vous ne pouvez pas choisir un case qui a déjà était prise\n");
        }
    }
    system("clear");
    printf("Joueur 1: Vous avez choisis la case num: %d\n", case_played_player);
    grille_played_current[case_played_player] = 1;
    grille_actually_played[case_played_player / 3][case_played_player % 3] = 'X';
    if (is_victory(grille_played_current)!=0)
    {
        printf("Bien joué vous avez gagné\n");
        exit(0);
    }
}

void player_two_round_to_play(char **grille_actually_played, int *grille_played_current)
{
    int case_played_player;

    case_played_player = -1;
    while (case_played_player < 0 || case_played_player > 8 || grille_played_current[case_played_player]!=0) 
    {
        printf("Joueur 2: Choisissez votre case parmis ceux dispo: \n- ");
        scanf("%d", &case_played_player);
        if (case_played_player < 0 || case_played_player > 8)
            printf("Choisis entre 1 et 8 stp\n");
        else if (grille_played_current[case_played_player]!=0)
        {
            printf("Vous ne pouvez pas choisir un case qui a déjà était prise\n");
        }
    }
    system("clear");
    printf("Joueur 2 Vous avez choisis la case num: %d\n", case_played_player);
    grille_played_current[case_played_player] = 2;
    grille_actually_played[case_played_player / 3][case_played_player % 3] = 'O';
    if (is_victory(grille_played_current)!=0)
    {
        printf("Le joueur 2 a gagné");
        exit(0);
    }
}

void show_current_grille(char **grille_actually_played)
{
    printf("\
		\n┏━━━┳━━━┳━━━┓\
		\n┃ %c ┃ %c ┃ %c ┃\
		\n┣━━━╋━━━╋━━━┫\
		\n┃ %c ┃ %c ┃ %c ┃\
		\n┣━━━╋━━━╋━━━┫\
		\n┃ %c ┃ %c ┃ %c ┃\
		\n┗━━━┻━━━┻━━━┛\n\n\n\
		",grille_actually_played[0][0],\
		grille_actually_played[0][1],\
		grille_actually_played[0][2],\
		grille_actually_played[1][0],\
		grille_actually_played[1][1],\
		grille_actually_played[1][2],\
		grille_actually_played[2][0],\
		grille_actually_played[2][1],\
		grille_actually_played[2][2]);
}

void poser_pion_bot(char **grille_actually_played, int *grille_played_current, int index)
{
    grille_actually_played[index / 3][index % 3] = 'O';
    grille_played_current[index] = 2;
    printf("L'ordinateur a choisi la case num°%d",index);
    if (is_victory(grille_played_current) == 1)
    {
        printf("L'ordinateur à gagné ");
        exit(0);
    }
}

void bot_niveau_1(char **grille_actually_played, int *grille_played_current)
{
    int i = 0;

    while (i < 9)
    {
        if (grille_played_current[i] == 0)
        {
            poser_pion_bot(grille_actually_played, grille_played_current, i);
            break;
        }
        i++;
    }
}

void bot_niveau_2(char **grille_actually_played, int *grille_played_current)
{
    int index;
    index = rand() % 9;
    while (grille_played_current[index] != 0)
    {
        index = rand() % 9;
    }
    poser_pion_bot(grille_actually_played, grille_played_current, index);
}

int minimax(int *grille, int profondeur, int tour_du_bot)
{
    if (is_victory(grille) != 0)
    {
        if (!tour_du_bot)
            return (10 - profondeur);
        else
            return (-10 + profondeur);
    }
    if (tour_du_bot)
    {
        int meilleur_score = -1000;
        for (int i = 0; i < 9; i++)
        {
            if (grille[i] == 0)
            {
                grille[i] = 2;
                int score = minimax(grille, profondeur + 1, 0);
                grille[i] = 0;
                if (score > meilleur_score)
                    meilleur_score = score;
            }
        }
        return (meilleur_score);
    }
    else
    {
        int pire_score = 1000;
        for (int i = 0; i < 9; i++)
        {
            if (grille[i] == 0)
            {
                grille[i] = 1;
                int score = minimax(grille, profondeur + 1, 1);
                grille[i] = 0;
                if (score < pire_score)
                    pire_score = score;
            }
        }
        return (pire_score);
    }
}

void bot_niveau_4(char **grille_actually_played, int *grille_played_current)
{
    int meilleur_score = -1000;
    int meilleur_coup = -1;

    for (int i = 0; i < 9; i++)
    {
        if (grille_played_current[i] == 0)
        {
            grille_played_current[i] = 2;
            int score = minimax(grille_played_current, 0, 0);
            grille_played_current[i] = 0;

            if (score > meilleur_score)
            {
                meilleur_score = score;
                meilleur_coup = i;
            }
        }
    }
    if (meilleur_coup != -1)
        poser_pion_bot(grille_actually_played, grille_played_current, meilleur_coup);
}

void bot_niveau_3(char **grille_actually_played, int *grille_played_current)
{
    int choix = (rand() % 2) + 1;
    if (choix == 1)
    {
        bot_niveau_2(grille_actually_played, grille_played_current);
    }
    else
    {
        bot_niveau_4(grille_actually_played, grille_played_current);
    }
}