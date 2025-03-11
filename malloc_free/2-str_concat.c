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
	int i, j = 0;

	if (s1 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	;

	s2 = malloc(sizeof(char) * (s1));

	if (s2 == NULL)
		return (NULL);

	for (j = 0; s2[j] != '\0'; j++)
	{
		s1[i] = s2[j];
		i++;
	}

	if (s1 == NULL)
		return (NULL);

	s1[i] = '\0';
	return (s1);
}
