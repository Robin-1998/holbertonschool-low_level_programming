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
	tableau = (int **)malloc(sizeof(int *) * height);
	if (tableau == NULL)
		return (NULL);

	/* Partie 4 */
	for (i = 0; i < height; i++)
	{
		tableau[i] = (int *)malloc(sizeof(int) * width);
		/* Partie 4.1*/
		if (tableau[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tableau[j]);
			}
			free(tableau);
			return (NULL);
		}
		/* Partie 4.2 */
		for (j = 0; j < width; j++)
		{
			tableau[i][j] = 0;
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
chaque ligne idividuelle. D'ailleurs on met int** pour caster.
// Partie 4 //
Cette boucle est utilisée pour parcourir toutes les lignes de la grille
que nous avons allouées jusqu'à ce point. i de son côté représente
l'index de la ligne pour laquelle l'allocation a échoué.
donc les lignes 0 à i-1 ont été correctement allouées (avant l'échec
de l'allocation pour la ligne i)
// Partie 4.1 //
Pour le free(tableau[j]), à chaque itération de la boucle, cette ligne
libère la mémoire allouée pour la ligne tableau[j]. tableau[j] est un
pointeur vers un tableau d'entiers, et free(tableau[j]) libère cette
mémoire. Cela permet d'éviter les fuites de mémoires, car chaque ligne
était allouée avec malloc.
Ensuite on fait free(tableau) pour libérer la mémoire allouée pour le
tableau principal (tableau). Initialisé à la ligne 30.
// Partie 4.2 //
Si l'allocation de mémoire pour la ligne est à l'inverse réussie, la
fonction initialise tous les éléments de cette ligné à zéro
dans la 2ème boucle
*/
