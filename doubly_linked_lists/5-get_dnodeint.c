#include "lists.h"

/**
 * get_dnodeint_at_index - fonction qui retourne le nombre de noeud de
 * la liste chaînée dlistint_t
 * @head: pointeur du nombre d'entier a ajouter en tête de liste
 * @index: entier postif qui permet de parcourir notre liste chaîné
 * Return: on retourne nos éléments
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i != index)
	{
		i++;
		head = head->next;
	}
	return (head);
}

/*
 * Tout d'abord on initialise une variable i à zéro comme dans le
 * paramètre de la fonction.
 * On boucle notre head jusquà ce qu'on atteigner notre élément
 * de fin (1024). On vérifie à chaque incrémentation de boucle que
 * si i n'est pas égal à l'index alors on continue
 * mais si il contient le bonne index alors head
 * retournera l'élément recherché.
 * et on retourne head qui contient les éléments parcouru
 * Merci chatMackeen pour la facilité d'écriture de la boucle
*/
/*
* INFO : On n'utilise pas de malloc car il est déjà géré dans le main
*/
