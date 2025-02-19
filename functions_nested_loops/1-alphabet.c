#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char texte = 'a';

	while (texte <= 'z')
	{
		_putchar(texte);
		texte++;
	}
	_putchar('\n');
}
