#include <stdlib.h>
#include <stdio.h>
#include "fonctioncopy.h"
#include "fonction.h"

int main(){
	char ** str_tab = malloc(5 * sizeof(*str_tab));
	str_tab[4] = NULL;

	str_tab[0] = str_cpy("Un anneau");
	str_tab[1] = str_cpy("pour");
	str_tab[2] = str_cpy("les");
	str_tab[3] = str_cpy("gouverner tous.");

	int total = count_tab(str_tab);
	
	printf("Le tableau contient %d elements.\n", total);

	int i = 0;

	while(str_tab[i] != NULL)
	{
		free(str_tab[i]);
		i = i + 1;
	}

	free(str_tab);
	exit(0);
}