#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str : string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (i[str] != '\0')
	{
		if (i % 2 == 0)
		_putchar(i[str]);
		i ++;
	}
	_putchar('\n');
}
