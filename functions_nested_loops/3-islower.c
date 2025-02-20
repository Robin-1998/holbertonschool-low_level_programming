#include "main.h"

/**
 * _islower - cheks for lowercase
 * @c : checks letters
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
