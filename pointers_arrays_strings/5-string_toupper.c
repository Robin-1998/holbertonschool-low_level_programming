#include "main.h"
#include "2-strlen.c"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * Return: Always 0.
 */

char *string_toupper(char *j)
{
	int i = 0;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] -= 32;
		}
	}
	return (j);
}

/*
* On initie d'avord notre boucle pour que notre chaine de caractère
* continue jusqu'à la fin ensuite si notre chaine de caractère est entre
* minuscule 'a' et 'z'.
* ensuite notre chaine de caractère transforme notre lettre minuscule en
* majuscule
*/
