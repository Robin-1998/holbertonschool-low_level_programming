#include "lists.h"

/**
 * dlistint_len - fonction qui retourne le nombre d'éléments dans
 * une liste chaîné dlistint_t
 * @h: un pointeur constant vers un noeud de la liste doublement châiné
 * Return: retourne le noeud
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nouveaunoeud;

	while (h)
	{
		nouveaunoeud++;
		h = h->next;
	}
	return (nouveaunoeud);
}
