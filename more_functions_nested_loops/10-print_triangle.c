#include "main.h"

/**
 * print_triangle - print a triangle
 * @size : taile
 * Return: Always 0.
 */

void print_triangle(int size)
{
	if (size >= 1)
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i - 1)
					_putchar(' ');
				else
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
