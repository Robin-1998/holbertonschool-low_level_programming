#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array
 * of integers
 * @a : pointeur vers un tableau d'entier
 * @n : nombre d'élément du tableau
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
	}
}

/*
 * la boucle for va parcourir la moitié du tableau et va inverser chaque paire
 d'élément.
 donc i commence à zéro va incrémenter et va s'occuper d'inverser un
 élément avec son symétrique par rapport au centre du tableau (moitié)
*/
