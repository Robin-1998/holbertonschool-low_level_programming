#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fonction qui libère une grille en 2 dimension précèdèment
 * créé dans la fonction alloc_grid
 * @grid :un double pointeur qui représente une matrice 2D
 * @height : la hauteur de la grille (tableau)
 * Return: retourne le pointeur des 2Dimensions
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		/* libère la mémoire de chaque ligne du tableau 2D*/
	}
	free(grid);
	/* libère la mémoire du tableau principal*/
}
/*
* Dans cette fonction on parcourt chaque ligne de la grille avec height.
Donc chaque pointeur de grid vers un tableau d'entier.
Dans cette boucle on libère la mémoire allouée pour
chaque ligne de la grille.
Du coup pour chaque donnée de grid[i] on appelle free pour libérer la
mémoire qu'il occupe.
Après avoir libéré chaque ligne de la grille, il faut libérer
le tableau entier
Note : nous n'utilisons pas malloc car nous n'avons pas besoin d'allouer
la mémoire, car on utilise l'erxercice de la tache N°3 pour allouer la
mémoire et seulement free est utilisé pour la libérer.
*/
