#include "main.h"

/**
 * _strcpy - copie la chaine de caractere pointer par src
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest : valeur retourner qui est copier du pointeur tableau src
 * @src : est notre pointeur contenant notre premier tableau boucler
 * qui est ensuite copier sur dest
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i[src] != '\0'; i++)
/*
 * initialise la boucle du pointeur tableau src qui commence
 * du premier caractere au dernier caractere
*/
	{
		i[dest] = i[src];
/*
 * Les valeurs du pointeurs tableau de src sont copier dans les valeur du
 * pointeur tableau dest
*/
	}
	return (dest);
/* On retourne la valeur de dest qui sera la meme que src */
}
