#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char texte = 'a';
	int i = 0;

	while (i < 10)
	{
		texte = 'a';
		while (texte <= 'z')
		{
			_putchar(texte);
			texte++;
		}
		_putchar('\n');
		i++;
	}
		_putchar('\n');
}
