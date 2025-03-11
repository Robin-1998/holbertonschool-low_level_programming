#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function qui retourn un pointeur sur un tableau d'entier en
 * 2 dimensions
 * @width : variable d'un entier qui contient la largeur de notre array
 * @height : variable d'un entier qui contient la hauteur de notre array
 * Return: retourne le pointeur des 2Dimensionset return NULL si ça échoue
 */

int **alloc_grid(int width, int height)
{
	/* Partie 1 */
	int **tableau;
	int i;

	/* Partie 2 */
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	/* Partie 3*/

	tableau = malloc(sizeof(int) * height);
	if (height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tableau[i] = malloc(sizeof(int) * width);
		if (tableau[i] == NULL)
			return (NULL);
	}

	return (tableau);
}

/*
* // Partie 1 //
on initialise nos variable et double pointeur (un double pointeur est utilisé
par rapport à celui qui est présent dans notre fonction de base)
// Partie 2 //
Si Width et height sont inférieur ou égal à 0, alors on retour NULL
// Partie 3 //
On alloue de la mémoire à notre hauteur et on vérifie en cas de mauavise
allocation de mémoire
*/
