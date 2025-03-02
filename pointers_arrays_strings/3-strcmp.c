#include "main.h"

/**
 * _strcmp - comparer deux chaine de caractere
 * @s1 : un pointeur de chaine qui sera comparé à s2
 * @s2 : un pointeur de chaine qui sera comparé à s1
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*
* for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
cette boucle s'arrête lorsque qu'on atteint la fin de l'une ou des deux
chaines. le signe || permet justement de vérifier que l'une ou l'autre
des des deux chaine n'est pas terminé
	if (s1[i] != s2[i])
à chaque itération dans la boucle cette condition viens comparer les
caractères de i dans s1 et s2. Si les caractères sont différents,
la fonction retourne la différence entre les deux caractères en utilisant
des paramètres de la table ASCII. Dans le 3-main.c vu la valeur ASCII
de H est 72 et celle de W est 87 cela fait donc 72 -87 = -15.
Si un caractère de la première chaine est plus petit dans l'ordre
alphabétique que celui de la deuxième chaine, la fonction retournera
une valeur négative.
En résumé définitif notre c=fonction compare nos deux chaine de aractères
en parcourant chaque caractère à l'aide de l'index i. Elle retourne
une diffénrence numérique (table ASCII) entre les premiers caractères non
égaux et return 0 si les chaines sont égales
*/
