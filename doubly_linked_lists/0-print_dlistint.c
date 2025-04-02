#include "lists.h"

/**
 * print_dlistint - imprime tous les éléments de la liste chaîné dlistint_t
 * @h: un pointeur constant vers un noeud de la liste doublement châiné
 * Return: retourne le nombre de noeud
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t first = 0;

	while (h)
	{
		printf("%d\n", h->n);
		first++;
		h = h->next;
	}
	return (first);
}
