#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function qui créé un tableay de caracttères et
 * l'itianlise avec un caractère spécifique
 * @size : Variable qui peut être uniquement posifif et
 * Contiens la taille du tableau
 * @c : Variable de type qui contient le caractère
 * Return: retourn Null si la taille est de 0
 */

char *create_array(unsigned int size, char c)
{
	char *add;
	unsigned int i;

	if (size == 0)
		return (NULL);
	add = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		add[i] = c;

	return (add);
}
