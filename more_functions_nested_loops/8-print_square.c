#include "main.h"

/**
 * print_square - print a square, followed by a new line
 * @size : square
 * Return: Always 0.
 */

void print_square(int size)
{
	if (size >= 1)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
