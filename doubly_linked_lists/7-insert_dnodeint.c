#include "lists.h"
/**
 * insert_dnodeint_at_index - fonction qui insert un nouveau noeud dans
 * une certain position
 * @h: double pointeur qui permet
 * @param idx
 * @param n
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
	{
		return (NULL);
	}

	nouveau_noeud->n = n;

	if (*h != NULL)
	{
		(*h)->prev = nouveau_noeud;
	}
	nouveau_noeud-> n = n;
	nouveau_noeud->next = NULL;
	if (idx == 0)
	{
		return (NULL);
	}
	return (nouveau_noeud);
}
