#include "lists.h"

/**
 * add_dnodeint - fonction qui ajoute un nouveau noeud au début de la
 * double chaîne listée dlistint_t
 * @head: double pointeur du nombre d'entier a ajouter en tête de liste
 * @n: est un pointeur d'entier
 * Return: retourne l'adresse du nouvel élément
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nouveaunoeud = malloc(sizeof(dlistint_t));

	if (nouveaunoeud == NULL)
	{
		return (NULL);
	}

	nouveaunoeud->n = n;
	nouveaunoeud->next = *head;
	*head = nouveaunoeud;

	return (*head);
}
