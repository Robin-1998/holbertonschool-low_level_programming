#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer
 * @lettre : value absolute
 * Return: Always 0.
 */

int _abs(int lettre)
{
	if (lettre >= 0)
	{
		return (lettre);
	}
	else
	{
		return (-lettre);
	}
}
