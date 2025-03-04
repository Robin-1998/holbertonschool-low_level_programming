#include "main.h"

/**
 * _strstr - function qui localise une sous-chaîne
 * @haystack : pointeur du premier tableau ("hello, world")
 * @needle : pointeur du deuxième tableau ("world")
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] != needle[j])
			return (&needle[i]);
		}
	}
	return (0);
}
