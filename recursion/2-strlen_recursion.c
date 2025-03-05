#include "main.h"

/**
 * _strlen_recursion - fonction qui affiche la longueur d'une chaine
 * @s : pointeur de la chaine de caractère
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
