#include "lists.h"

/**
 * delete_dnodeint_at_index - fonction qui supprime un noeud à l'index
 * @head: double pointeur qui parcoure la liste chaînée
 * @index: fait référence à la position du noeud dans la double liste
 * chaînée
 * Return: on retourne -1 si on rencontre
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* PARTIE 1 */
	unsigned int i = 0;
	dlistint_t *temp = *head;

	/* PARTIE 2 */
	if (*head == NULL)
	{
		return (-1);
	}
	/* PARTIE 3 */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	/* PARTIE 4 */
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	else
	{
		*head = temp->next;
	}
	/* PARTIE 5 */
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}

/*
* PARTIE 1
* On initialise une variable à zéro pour parcourir notre index.
* On créé un pointeur nommé temp qui servira à parcourir notre head
* PARTIE 2
* Si notre chaine listée ne contient rien on retourne NULL
* PARTIE 3
* Tant que notre chaine de liste n'est pas null et que i n'est pas égal
* à l'index donc en soit on parcours notre liste châiné en parcourant
chaque noeud et en passant bien au suivant.
* PARTIE 4
* Si temp n'est pas le premier élement, on dit à l'élément avant temp
de pointer vers l'élément après temp.
* et à l'inverse Si temp n'est pas le dernier élément, on dit à l'élément
après temp de pointer vers l'élément avant temp
* PARTIE 5
* Et pour finir si Temp n'est pas le dernier élément, on "met à jour" pour
qu'il pointe vers l'élèment précèdent de temp.
*/
