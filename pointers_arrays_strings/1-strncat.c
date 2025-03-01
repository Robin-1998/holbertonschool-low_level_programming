#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest : pointeur d'une chaine de caractère (lié au char)
 * qui va recevoir la châine de caractère concaténée
 * @src : second string concatenates
 * @n : pointer copier de source
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; j < n && src[j] != '\0';)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
