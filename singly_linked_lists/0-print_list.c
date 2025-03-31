#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - fonction qui affiche tous les éléments de la liste : list_t
 * @h: pointeur de list_t qui permet de circuler dans la liste châinée
 * Return: retourne le nombre de noeud.
 */

size_t print_list(const list_t *h)
/*size_t correspond à la valeur retour attendu de la fonction*/
{
	size_t first = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		first++;
		h = h->next;
	}
	return (first);
}

/*
* On initialise size_t first 0; c'est comme si on utilisais un int.
*On boucle h tant qu'il n'est pas null. (On boucle notre chaîne listée)
*	Dans la boucle ensuite si str est null on retourne "[0] (nil)\n"
*	S'il n'est pas null alors on retourne la longueur de la châine + la chaine
*	caractère
*	h = h->next permet de passer à l'élément suivant (notre noeud dans la
*	structure)
*/
