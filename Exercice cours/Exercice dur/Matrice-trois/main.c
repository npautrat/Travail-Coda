#include <stdlib.h>
#include <stdio.h>
#include "fonction.h"
#include "fonctioncopy.h"

int main(){
	char ** str_tab = malloc(4 * sizeof(*str_tab));
	str_tab[3] = NULL;

	str_tab[0] = str_cpy("Hello");
	str_tab[1] = str_cpy("World");
	str_tab[2] = str_cpy("!");

	char * result = concat_tab(str_tab);
	
	if (result != NULL)
	{
		printf("Resultat : %s\n", result);
		free(result); /* On libère la chaîne que votre fonction a allouée */
	}

	int i = 0;

	while(str_tab[i] != NULL)
	{
		free(str_tab[i]);
		i = i + 1;
	}

	free(str_tab);
	exit(0);
}