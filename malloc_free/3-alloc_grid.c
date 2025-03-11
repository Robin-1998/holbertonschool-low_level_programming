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
	int i, j;

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
	tableau = (int**)malloc(sizeof(int*) * height);
	/*if (height == 0) */
	/* return (NULL); */

	/* Partie 4 */
	for (i = 0; i < height; i++)
	{
		tableau[i] = (int *)malloc(sizeof(int) * width);
		if (tableau[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tableau[j]);
			}
			free(tableau);
			return (NULL);
		}
	}
	return (tableau);
}

/*
* // Partie 1 //
on initialise notre variable et double pointeur (un double pointeur est
utilisé par rapport à celui qui est présent dans notre fonction de base)
// Partie 2 //
Si Width et height sont inférieur ou égal à 0, alors on retour NULL
Il n'est pas nécessaire de tenter une allocation mémoire pour le tableau, car
un tableau de dimensions invalides ne peut être créé
// Partie 3 //
si les dimensions sont vérifiés, on alloue de la mémoire à notre hauteur
et on vérifie en cas de mauvaise allocation de mémoire.
Cette étape est nécessaire car vous avez un tableau de "height" pointeurs,
donc on doit allouer cette mémoire avant d'essayer d'allouer la mémoire pour
chaque ligne idividuelle
// Partie 4 //
On initialise ensuite une boucle où on index une valeur où on
incrémente petit à petit.
On alloue la mémoire de notre pointeur indexé à i. Pour lui dire qu'on
alloue de la mémoire en réservant autant d'entier qu'il y a de width sur
la taile du pointeur (tableau[i]) et on vérifie pour évite une erreur.
*/
