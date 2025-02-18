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
	char texte = 'a';

	while (texte <= 'z')
	{
		if (texte == 'q' || texte == 'e')
		{
			texte++;
		}
		putchar(texte);
		texte++;
	}
	putchar('\n');
return (0);
}
