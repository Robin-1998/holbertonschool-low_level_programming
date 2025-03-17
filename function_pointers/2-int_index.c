#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - fonction qui retourne un nombre entier.
 * @array : un pointeur vers un tableau d'entiers
 * @size : variable en paramètre qui correspond à la taille du tableau
 * @cmp : un pointeur vers une fonction qui prend un entier en argument
 * et retourne un entier
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Partie 1 */
	if (array == NULL && cmp == NULL)
	{
		return (-1);
	}

	/* Partie 2 */
	for (i = 0; i < size; i++)
	{
        if (cmp(array[i]) != 0)
        {
            return (i);
        }
	}
	return (-1);
}

/*
* Partie 1
On vérifie que si aucun élément ne correspond, on retourne -1.
Partie 2
On boucle tous les éléments de size pour que l'on obtienne chaque
élément du tableau
dans notre boucle on rajoute une conditon que si cmp retourne une valeur
différente de 0 alors il retourne l'index ou cmp est vrai.
Si la boucle se termine sans trouver un élément qui satisafait la
condition de cmp, cela signifie que aucun élément du tableau ne correspond
à la condition et cela retournera -1
*/
