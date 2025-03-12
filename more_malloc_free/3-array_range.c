#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - fonction qui créé un tableau d'entier
 * @min : variable dans les paramètres de fonction qui affiche la
 * premier entier du tableau
 * @max : variable dans les paramètres de fonction qui affiche le
 * deuxième entier du tableau
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	/* Partie 1 */
	int *entier;
	int i, k = 0;

	/* Partie 2 */
	if (min > max)
	{
		return (NULL);
	}

	/* Partie 3 */
	entier = malloc(sizeof(int) * (min + max + 1));
	if (entier == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = min; i <= max; i++)
		entier[k] = i;
		k++;
	}
	return (entier);
}

/*
* Partie 1
On décale notre pointeur qui va stocker la mémoire du tableau d'entier
Partie 2
Si min est supérieur à max alors on retourne NULL
Partie 3
dans notre pointeur on y stocke un entier de
*/
