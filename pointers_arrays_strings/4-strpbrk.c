#include "main.h"

/**
 * rev_string  - function that prints a string, followed by a new line
 * @s : reverse
 * Return: Always 0.
 */

 char *_strpbrk(char *s, char *accept)
 {
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++);
	for (j = 0; accept[j] != '\0'; i++);
	if (s[i] == accept[j])
		return (s + i && accept + j);
	else
	{
	return (0);
		}
 }
