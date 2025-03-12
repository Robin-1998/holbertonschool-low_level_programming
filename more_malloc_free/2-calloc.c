#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Fonction qui concatène deux chaîne de caractère
 * @nmemb : variable d'entier positif qui contient le nombre d'éléments
 * @size : variable d'entier qui contient la taille en octets
 * Return: retourne le pointeur qui a stocker la mémoire
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* PARTIE 1 */
	char *mem_array;
	unsigned int i;

	/* PARTIE 2 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* PARTIE 3 */
	mem_array = malloc(nmemb * size);
	/* PARTIE 4*/
	if (mem_array == NULL)
	{
		return (NULL);
	}
	/* PARTIE 5 */
	else
	{
		for (i = 0; i < nmemb * size; i++)
		mem_array[i] = 0;
	}
	return (mem_array);
}
/*
* PARTIE 1
On initialise notre pointeur char car nous voulons allouer notre mémoire
dans ce pointeur d'un tableau (donc char)
PARTIE 2
Si nmemb ou si size sont égales à zéro alors on retourne NULL
PARTIE 3
Ensuite on alloue de la mémoire dans notre pointeur que nous avons
initialisé dans ce début de fonction. Ici nous n'utilisons pas sizeof mais
on le remplace par nmemb * size car nous ne voulons pas allouer de la
mémoire pour un seul objet de type char mais nous avons besoin de
mémoriser nmemb élément de taille size
PARTIE 4
Si notre mémoire n'est pas valide alors on retourne une erreur.
PARTIE 5
à l'inverse si c'est valide, on itère la taille taille totale en octets
pour tous les éléments que l'on souhaite parcourir i < nmemb * size
et l'on retourn notre pointeur qui contient la mémoire avec
la taille totale en octets avec tout nos éléments à zéro,
ce qui permet à la mémoire d'être initialisé à zéro
PARTIE 6
Et on fini par retourner notre pointeur qui contient toute la mémoire
qu'il a enmagasiné.
*/
