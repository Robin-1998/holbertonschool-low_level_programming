#include "main.h"

/**
 * create_buffer - fonction qui va créer une chaine de
 * caractère dans un fichier
 *
 * @fichiers : fichier
 * Return: retourne la chaine de caractère
 */
char *create_buffer(char *fichiers)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fichiers);
		exit(99);
	}

	return (buffer);
}
