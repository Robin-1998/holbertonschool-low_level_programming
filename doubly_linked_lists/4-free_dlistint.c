#include "lists.h"
/**
 * add_dnodeint_end - fonction qui ajoute un nouveau noeud à la fin de
 * la liste chaîné dlistint_t
 * @head: double pointeur du nombre d'entier a ajouter en tête de liste
 * @n: est un pointeur d'entier
 * Return: retourne l'adresse du nouvel élément
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

