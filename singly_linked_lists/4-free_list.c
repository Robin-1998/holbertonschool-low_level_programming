#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - fonction qui libères les listes de list_t
 * @head: Il correspond au premier élément de la liste (premier noeud)
 */
void free_list(list_t *head)
{
	list_t *memory;

	while (head != NULL)
	{
		memory = head; /*On sauvegarde la référence au noeud actuel*/
		head = head->next; /*On avance dans la liste*/
		free(memory->str);
		/*On libère la chaîne de caractères associée*/
		free(memory); /* On libère le noeud lui-même */
	}
}

/*
* Vu que dans l'exercice il est demandé de libérer les listes, avant
* de le libérer, on doit savoir où il se trouve. Donc, on garde une copie
* du noeud actuel dans temp.
* Pour libérer toute la mémoire on boucle on disant que si head n'est
pas NUll alors notre nouveau pointeur stocke la valeur du premier noeud
On avance au fur et à mesure dans la liste chaîné.
On libère la chaîne de caractère associée
Et on libère le noeud avec la variable memory.
*/
