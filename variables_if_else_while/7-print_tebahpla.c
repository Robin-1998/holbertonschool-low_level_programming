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
	char texte = 'z';

	while (texte >= 'a')
	{
		putchar(texte);
	texte--;
	}
	putchar('\n');
return (0);
}
