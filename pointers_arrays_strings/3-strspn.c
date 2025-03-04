#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s : pointeur d'une chaine de caractère
 * @accept : le pointeur accept qui va faire la différence de nombre de
 * caractère avec le pointeur s.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0' ; j++)
if (s[i] == accept[j])
{
return (s[i]);
}
i++;
}
return (0);
}



/*
* on boucle notre accept
*/

