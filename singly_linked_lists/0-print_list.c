#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - fonction qui affiche tous les éléments de la liste : list_t
 * @h: pointeur de list_t qui permet de circuler dans la liste châinée
 * Return: retourne le nombre de noeud.
 */

size_t print_list(const list_t *h)
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
*
*/
