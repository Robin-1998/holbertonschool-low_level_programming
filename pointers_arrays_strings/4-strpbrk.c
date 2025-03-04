#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s : pointeur du premier tableau qui dans le main "hello world"
 * @accept : pointeur du second tableau qui dans le main affiche "world"
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (&s[i]);
		}
	}
	return (0);
}

 /*
 * tant que les caractères du pointeur tableau s ne sont pas arrivés à la
 * fin
 * on incrémente et dans cette boucle ensuite on imbrique une boucle dans la
 * première avec le pointeur j qui identifiera la seconde chaîne ("world").
 * Et si le pointeur du tableau (s) est égal au deuxième pointeur du
 * tableau (accept) on retourn l'adresse du tableau du premier pointeur
 * si ces conditions ne sont pas remplis on affiche rien.
 */

