#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s : length
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (i[s] != '\0')
	{
	i++;
	}
	return (i);
}
/**
 * add_node_end - fonction qui ajoute un nouveau noeud à la fin de la liste
 * chaînée list_t
 * @head: est un pointeur vers un pointeur qui permet à la fonction
 * de modifier le pointeur original de la tête de la liste chaînée
 * @str: chaîne de caractère qui sera copiée dans le noeud
 * nouvellement créé.
 * Return: retourne le nombre d'élément de la liste chaînée list_t
 */
list_t *add_node_end(list_t **head, const char *str)
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
	nouveaunoeud->len = _strlen(str);
	/* Code nécessaire pour ajouter la liste chaîné à la fin de la liste*/
	nouveaunoeud->next = NULL;
	if (*head == NULL)
	{
		*head = nouveaunoeud;
	}
	else
	{
		list_t *temp = *head;


		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nouveaunoeud;
	}
	return (nouveaunoeud);
}
