#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - function qui affiche le nombre d'argument suivant le nom du
 * fichier transmis
 * @argc : Contiens le nombre d'argument
 * @argv : ai censé contenir le nombre de caractère mais vu qu'on n'utilise
 * pas cette variable, on fait un (void)
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *add;
	unsigned int i;

	if (size == 0)
		return (NULL);
	add = malloc(sizeof(char) * size);

	if (add == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		add[i] = c;

	return (add);
}
