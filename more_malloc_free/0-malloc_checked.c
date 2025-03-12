#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Fonction que alloue de la mémoire à l'aide de malloc
 * @b : Variable d'entier positif qui contient
 * Return: retourn e un pointeur qui a la mémoire
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b == 0)
	{
		return (NULL);
	}
	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
return (mem);
}

/*
* Tout d'abord on initialise notre pointeur qui va contenir notre
allocation de mémoire
*/
