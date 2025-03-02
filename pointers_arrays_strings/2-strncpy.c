#include "main.h"

/**
 * _strncpy - function qui copie une chaine de caractere
 * @dest : pointeur destinataire de la chaîne copié de src
 * @src : pointeur qui copie une chaine de caractere vers dest
 * @n : nombre maximale de caractere qui seront copier
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}

/*
* for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
Tant que i est inférieur à n et que le caractère de la chaine src
à l'index i n'est pas le
dernier caractère de la chaine il continue
et a chaque itération le caractère src [i] est copier dans dest [i]

for (i = 0 ; i < n; i++)
si la chaine src est plus courte que n, alors après avoir copié tous les
les caractères de src, il peut y avoir des caractère restant dans dest
donc cette boucle commence donc à l'indice où la première boucle s'est
terminé (i) et ajoute des caractères nuls ('\0) dans dest jusqu'à ce que
l'indice atteigne n
	dest[i] = '\0';
cette boucle va compléter la chaine dest avec des caractères nuls '\0'
pour s'assurer que la chaine dest a bien une longueur de n caractère
cela permet à dest d'avoir n caractère et d etre correctement terminé
*/
