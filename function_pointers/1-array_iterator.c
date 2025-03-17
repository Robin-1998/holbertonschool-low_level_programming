#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - fonction qui affiche le prénom/nom
 * @array : pointeur qui correspondra au premier élément
 * d'un tableau d'entier
 * @size : variable issue de notre première fonction pour parcourir la
 * taille du tableau.
 * @action : pointeur paramètre d'une autre fonction qui va utiliser
 * notre pointeur de notre première fonction.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

/*
* au lieu de faire int i on déclare i via size_t pour s'assurer que la
variable de boucle (i) est du même type que size.
En résumé, remplacer int i par size_t i dans ce contexte est une bonne
pratique pour assurer la cohérence des types et éviter des erreurs
potentielles lors de la comparaison de variables.
On boucle tous les éléments de size pour que l'on obtienne chaque
élément de notre tableau
*/

