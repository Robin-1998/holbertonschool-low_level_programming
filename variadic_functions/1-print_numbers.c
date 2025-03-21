#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - fonction qui affiche des nombres suivi d'un saut de ligne
 * @separator: paramètre de fonction qui correspond au caractère qui
 * sépare les nombre
 * @n: paramètre de fonction qui affiche la valeur total de nombres à
 * afficher. Il détermine le nombre d'arguments supplémentaires que la
 * fonction doit traiter
 */

void caractere(const char c)
{
	
}
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Partie 1 */
	va_list argument;
	unsigned int i;

	/* Partie 2 */
	if (separator == NULL)
	{
		separator = "";
	}

	/* Partie 3 */
	va_start(argument, n);
	for (i = 0; i < n; i++)
	printf("\n");
	va_end(argument);
}

/*
* // Partie 1 //
Vu que l'on utilise une fonction variadique on déclare notre va_list où le
nom "argument" équivaut à notre variable d'argument.
Note : Dans une fonction variadique, il est obligatoire de commencer
par va_list.
on déclare également une variable d'un entier positif pour une futur boucle
// Partie 2 //
Si notre paramètre nommé "operator" est Null, alors on ne l'affiche pas
// Partie 3 //
On démarre notre fonction variadique avec va_start
*/
