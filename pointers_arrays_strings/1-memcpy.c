#include "main.h"

/**
 * _memcpy - copie la zone mémoire
 * @dest : pointeur où les mémoires de src sont copiés
 * @src : un pointeur qui va copier ses données pour les intégrer à dest
 * @n : me nombre d'octet qui seront copier
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	/* obligation d'utiliser unsigned int car la variable n dans notre function*/
	/* est unsigned ce qui signifie que la valeur sera forcément positive */
	/* donc pour la boucle qui viendra après il faut initier deux variable*/
	/* unsigned car le nombre d'itération de la boucle ne peut être négatif*/

	for (i = 0; i < n ; i++)
	{
	dest[i] = src[i];
	}

	/* la boucle parcourt les n (octets) et s'incrémente au fur et à mesure*/
	/* et à chaque itération l'octet de i dans src est copié dans l'octet i*/
	/* de dest Une fois que la boucle est terminé, elle retourne dest */

	return (dest);
}
