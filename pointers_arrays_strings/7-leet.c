#include "main.h"
#include "2-strlen.c"
/**
 * leet  - function that encodes a string into 1337.
 * @s : chaine de caractere qui change les caravtères en 1337
 * Return: Always 0.
 */

char *leet(char *s)
{
	int i, j;
	char first[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char second[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == first[j] || s[i] == second[j])
			{
				s[i] = numbers[j];
			}
		}
	}
	return (s);
}
