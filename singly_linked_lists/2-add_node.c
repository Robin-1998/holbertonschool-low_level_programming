#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - fonction qui ajoute un nouveau noeud au début de la liste list_t
 * @head: Correspond à un double pointeur du nombre de caractère
 * @str: est un pointeur de chaîne de caractère
 * Return: retourne le nombre de noeud.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveaunoeud = malloc(sizeof(list_t));
	/* vérification pour l'allocation mémoire*/
	if (nouveaunoeud == NULL)
	{
		return (NULL);
	}
	nouveaunoeud->str = strdup(str);
		if (nouveaunoeud->str == NULL)
		{
			free(nouveaunoeud);
			return (NULL);
		}

	nouveaunoeud->len = strlen(str);
	nouveaunoeud->next = *head;
	*head = nouveaunoeud;

	return (*head);
}

/*
* Dans notre fonction, pour créer un nouveau noeud il faut utiliser malloc
pour une allocation de mémoire.
Vu que l'on utilise une allocation mémoire dynamique, il faut vérifier
toujours vérifier en cas d'erreur, c'est ce que l'on fait dans la
condition d'après.

*/
