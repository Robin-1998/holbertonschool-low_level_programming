#include "main.h"
#include "2-strlen.c"
/**
 * _memset - fonction qui remplit la mémoire (s) avec une valeur constante
 * @s : pointeur qui récupère les caractère (valeur) de b
 * @b : variable de caractère qui sont uilisés pour les copier dans le
 * pointeur de tableau (s)
 * @n : est une varaible qui ne peut être que positive qui sert à indiquer
 * par exemple dans ce code, tant que notre variable i est inférieur à notre
 * variable n on incrémente
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n ; i++)
	{
	s[i] = b;
	}
	return (s);
}
