#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char texte;

	for (texte = 'a'; texte <= 'z'; texte++)
	{
		putchar(texte);
	}
	for (texte = 'A'; texte <= 'Z'; texte++)
	{
		putchar(texte);
	}
	putchar('\n');
	return (0);
}
