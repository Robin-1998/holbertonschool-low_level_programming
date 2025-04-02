#include "lists.h"
/**
 * add_dnodeint_end - fonction qui ajoute un nouveau noeud à la fin de
 * la liste chaîné dlistint_t
 * @head: double pointeur du nombre d'entier a ajouter en tête de liste
 * @n: est un pointeur d'entier
 * Return: retourne l'adresse du nouvel élément
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouveaunoeud = malloc(sizeof(dlistint_t));
	/* on initalise un malloc pour la créatuin d'un nouveau noeud */
	if (nouveaunoeud == NULL)
	{
		return (NULL);
	}
	/* On vérifie si mémoire est null*/
	nouveaunoeud->n = n;
	/* on affiche un entier dans notre noeud*/
	nouveaunoeud->prev = NULL;
	/* on garentie qye le nouveau noeud n'a pas encore de noeud précèdent*/
	if (*head == NULL)
	{
		*head = nouveaunoeud;
	}
	/* on fait du nouveau noeud le premier noeud de la liste */
	/* Ce qui permet de définir le premier élément de la liste */
	/* lorsqu'on insère le premier noeud */
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
			temp->next = nouveaunoeud;
			nouveaunoeud->prev = temp;
	}
	/* On parcourt la liste jusqu'à trouver le dernier noeud*/
	/* Une fois que le dernier noeud est trouvé, on modifie son pointeur next*/
	/* pour qu'il pointe vers le nouveau noeud */
	/* Puis, on met à jour le pointeur prev du nouveau noeud pour qu'il*/
	/* pointe vers l'ancien dernier noeud*/
	return (nouveaunoeud);
}
