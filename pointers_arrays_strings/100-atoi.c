#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s : string
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 0 && s[i] <= 9)
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return s[i];
}
