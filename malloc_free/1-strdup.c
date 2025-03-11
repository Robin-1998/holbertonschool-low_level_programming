#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function qui retourne un pointeur vers un espace
 * nouvellement alloué dans la mémoire, qui contient une copie de
 * la chaîne de caractère donnée en paramètre
 * @str : pointeur de la chaine à copier
 * Return: retourn Null si la zone mémoire mémoire est mal alloué
 * sinon cela retourne correctement
 */

char *_strdup(char *str)
{
	char *add;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] ; i++)
	;

	/* On calcule la longueur de notre chaîne*/

	add = malloc(sizeof(char) * (i + 1));
/* On alloue de la mémoire pour la futur copie */
/*
* On fait i + 1 car i représente la longueur de la chaine (le nombre
de caractère avant le caractère nul \0 qui termine la chaîne) i + 1 permet
de réserver un espace pout tous les caractères de la chaîne plus un espace
supplémentaire  pour le caractère nul \0 qui termine la chaîne
*/

	if (add == NULL)
		return (NULL);

	/*On vérifie bien que notre pinteur est NULL*/

	for (j = 0; j < i ; j++)
	{
		add[j] = str[j];
	}

	/* Cette boucle copie chaque caractère de la chaîne str dans nouvelle */
	/* chaîne cpy*/

	add[i] = '\0';

	/*une fois la copie terminée, ona joute un caractère nul \0 à la fin de*/
	/* la chaîne cpy pour en faire une chaîne de caracère valide*/
	/* cela permet au programme de déterminer que la chaîne se termine*/
	/*après le dernier caractère*/
	return (add);
}
