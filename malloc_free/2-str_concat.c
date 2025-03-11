#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function qui concatène deux chaîne de caractères
 * @s1 : premier pointeur de chaîne à concaténé
 * @s2 : second pointeur de chaîne à concaténé
 * Return: retourne le premier pointeur concaténé
 */

char *str_concat(char *s1, char *s2)
{
	char *add;
	int i, j = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	;

	for (j = 0; s2[j] != '\0'; j++)
	;

	add = malloc(sizeof(char) * (i + j + 1));

	if (add == NULL)
		return (NULL);

    for (i = 0; s1[i] != '\0'; i++)
        add[i] = s1[i];

    for (j = 0; s2[j] != '\0'; j++)
        add[i + j] = s2[j];

    add[i + j] = '\0';

	return (add);
}
