#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Fonction que alloue de la mémoire à l'aide de malloc
 * @b : Variable d'entier positif qui contient les valeurs
 * Return: retourn e un pointeur qui a la mémoire
 */

void *malloc_checked(unsigned int b)
{
	/* Partie 1 */
	void *mem;
	/* Partie 2 */
	if (b == 0)
	{
		return (NULL);
	}
	/* Partie 3 */
	mem = malloc(sizeof(int) * b);
	if (mem == NULL)
	{
		exit(98);
	}
	/* Partie 4 */
return (mem);
}

/*
* // PARTIE 1 //
Tout d'abord on initialise notre pointeur qui va contenir notre
allocation de mémoire. On initialise un pointeur de type void car dans
notre fonction un void est utilisé.
// PARTIE 2 //
Avant d'allouer de la mémoire on vérifie bien si notre paramètre retourne
une erreur si l'allocation échoue
// PARTIE 3 //
On alloue de la mémoire
d'entier sur notre pointeur selon le nombre de b (le nombre d'entier).
On alloue donc dynamiquement en fonction des valeurs de b.
Ensuite on vérifie bien si que si notre pointeur qui a stocké la mémoire
a échoué dans son allocation de mémoire alors on retourne exit(98) pour
terminer immédiatement le programme avec un code de sortie 98.
// Partie 4 //
A l'inverse si notre allocation mémoire à réussi on retourne le
pointeur qui a stocker la mémoire du nombre d'entier de b.
*/
