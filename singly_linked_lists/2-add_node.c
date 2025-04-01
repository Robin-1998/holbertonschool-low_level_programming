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
	nouveaunoeud->len = _strlen(str);
	nouveaunoeud->next = *head;
	*head = nouveaunoeud;

	return (*head);
}

/*
* Dans notre fonction, pour créer un nouveau noeud il faut utiliser malloc
* pour une allocation de mémoire.
* Vu que l'on utilise une allocation mémoire dynamique, il faut vérifier
* toujours vérifier en cas d'erreur, c'est ce que l'on fait dans la
* condition d'après.
* Ensuite on dupplique la châine de caractère et on la copie dans une
* structure. Si la copie échoue, elle libère la mémoire allouée pour la
* structure et retourne NULL pour signaler l'échec.
* Ensuite vu que l'on veut également afficher la longueur de la châine, on
* rappelle une ancienne fonction pour utiliser strlen (fonciton qui calcule
* la longueur de la chaîne)
* après ça on met notre nouveau noeud en tête de liste en l'intégrant à
* head et on retourne le nouveau pointeur vers la tête de la liste qui est
* maintenant le nouveau noeud ajouté
*/
