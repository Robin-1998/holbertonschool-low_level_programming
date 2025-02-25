#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n : diagonal
 * Return: Always 0.
 */

void print_diagonal(int n)
{
if (n > 0)
{
int i;

for (i = 0; i < n; i++)
{
int j;

for (j = 0; j < n; j++)
{
if (j == i)
_putchar(92);
else
_putchar(' ');
}
_putchar('\n');
}
}
	else
	{
		_putchar ('\n');
	}
}
