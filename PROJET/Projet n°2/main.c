#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "fonction.h"

int main()
{
	int difficulty_bot= -1;
	int case_played_player;
	int i=0;
	int j=0;
	int coups;
	int * grille_played_current = malloc(9 * sizeof(int));

	char list1[3] = {"012"};
    char list2[3] = {"345"};
    char list3[3] = {"678"};
    char **grille_actually_played = malloc(4 * sizeof(*grille_actually_played));

    grille_actually_played[3] = NULL;
    grille_actually_played[0] = malloc(3 * sizeof(char));
    grille_actually_played[1] = malloc(3 * sizeof(char));
    grille_actually_played[2] = malloc(3 * sizeof(char));

    copy_numbers(list1, grille_actually_played[0], 3);
    copy_numbers(list2, grille_actually_played[1], 3);
    copy_numbers(list3, grille_actually_played[2], 3);

	printf("Bonjour, bienvenue dans le tic tac noes, le but du jeu est de battre N0N0 l'ordinateur.\
		\nPour cela vous devrez mettre 1,2,...,9 pour choisir la case qui va être affichez si dessous.\
		\nBonne chance a vous pour battre la difficulté de N0N0 que vous allez choisir.");
	printf("\n\nChoisir la difficulté de N0N0:\n");
	while (difficulty_bot<1 || difficulty_bot>5)
	{
		printf("- 1: Abosulement débile\n");
		printf("- 2: De l'intéligence de Maximilien (très con)\n");
		printf("- 3: De l'intéligence de Maxim (très smart)\n");
		printf("- 4: L'intéligence du dev (tu ne gagneras pas)\n");
		printf("- 5: 1V1 (vous jouez contre votre pote ou vous même si vous en avez pas)\n");
		printf("- ");
		scanf("%d",&difficulty_bot);
		if (difficulty_bot<1 || difficulty_bot>5)
		{
			printf("Choisis bien dans les difficultée dispo");
		}
	}
	
	show_current_grille(grille_actually_played);
	if (difficulty_bot!=5)
	{
		while (true)
		{
			player_one_round_to_play(grille_actually_played, grille_played_current);
			coups++;
			if (coups==9)
			{
				printf("égalité");
				exit(0);
			}
			if (difficulty_bot == 1)
				bot_niveau_1(grille_actually_played, grille_played_current);
			else if (difficulty_bot == 2)
				bot_niveau_2(grille_actually_played, grille_played_current);
			else if (difficulty_bot == 3)
				bot_niveau_3(grille_actually_played, grille_played_current);
			else if (difficulty_bot == 4)
				bot_niveau_4(grille_actually_played, grille_played_current);
			coups++;
			if (coups==9)
			{
				printf("égalité");
				exit(0);
			}
			printf("\n");
			show_current_grille(grille_actually_played);
		}
	}
	else 
	{
		while (true)
		{
			player_one_round_to_play(grille_actually_played, grille_played_current);
			show_current_grille(grille_actually_played);
			player_two_round_to_play(grille_actually_played, grille_played_current);
			printf("\n");
			show_current_grille(grille_actually_played);
		}
	}
}