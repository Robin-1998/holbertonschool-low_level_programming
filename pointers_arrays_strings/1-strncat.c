#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest : pointeur d'une chaine de caractère (lié au char)
 * qui va recevoir la châine de caractère concaténée
 * @src : second string concatenates
 * @n : pointer copier de source
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	;
	/* la chaîne dest est parcouru jusqu'à trouver atteindre la fin
	* de la fin de la chaîne de caractère
	*/
	for (j = 0; j < n && src[j] != '\0';)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	/* la boucle permet de copier des caractères de src vers dest
	* a chaque itération de la boucle, un caractère de src est copié dans dest
	* après chaque copie, on passe à la position suivante dans dest (grâce à i++)
	* si src est plus court que n, on copie tous les caractères de src jusqu'au
	* dernier caractère
	*/
	dest[i] = '\0';
	/* on s'assure que dest[i] s'arrête au dernier caractere*/
	return (dest);
}
