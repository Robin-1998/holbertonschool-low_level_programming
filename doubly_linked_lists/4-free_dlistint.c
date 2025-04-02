#include "lists.h"
/**
 * free_dlistint - fonction qui libère en mémoire la double liste chaîné
 * dlistint_t
 * @head: pointeur du nombre d'entier a ajouter en tête de liste
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *memory;

	while (head != NULL)
	{
		memory = head;
		head = head->next;
		free(memory);
	}
}

