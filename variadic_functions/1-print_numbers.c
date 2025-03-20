#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - fonction qui affiche des nombres suivi d'un saut de ligne
 * @separator:
 * @n:
 * Return:
 */

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
	{
		printf("%d", va_arg(argument, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argument);
}

/*
* // Partie 1 //
Vu que l'on utilise une fonction variadique on déclare notre va_list où le
nom "argument" équivaut à notre variable d'argument.
Note : Dans une fonction variadique, il est obligatoire de commencer
par va_list.
on déclare également
// Partie 2 //
Si notre paramètre nommé "operator" est Null, alors on ne l'affiche pas
// Partie 3 //
*/
