#include "variadic_functions.h"

/**
 * print_caractere - fonction qui imprime un caractère
 * @argument: contient la liste des arguments variadiques
 */
void print_caractere(va_list argument)
{
	printf("%c", va_arg(argument, int));
}
/**
 * print_entier - fonction qui imprime un entier
 * @argument: contient la liste des arguments variadiques
 */
void print_entier(va_list argument)
{
	printf("%d", va_arg(argument, int));
}
/**
 * print_float_null - fonction qui imprime un flottant
 * @argument: contient la liste des arguments variadiques
 */
void print_float_null(va_list argument)
{
	printf("%f", va_arg(argument, double));
}

/**
 * print_string - fonction qui imprime un caractère(un string)
 * @argument: contient la liste des arguments variadiques
 */
void print_string(va_list argument)
{
	char *stringg = va_arg(argument, char*);

	if (stringg == NULL)
	{
		printf("(nil)");
	}
	printf("%s", stringg);
}
/**
 * print_all - fonction qui imprime tout (nombre + entier + caractère)
 * @format: paramètre de fonction qui listes les types d'arguments qui
 * sont passés dans la fonction
 */

void print_all(const char * const format, ...)
{
	/* Partie 1 */
	va_list argument;
	int b = 0;
	const char *separator = "";
	int i;

	choice symbol_type[] = {
		{'c', print_caractere},
		{'i', print_entier},
		{'f', print_float_null},
		{'s', print_string},
	};

	va_start(argument, format);
	while (format && format[b])
	{
		i = 0;
		while (i < 4)
		{
			if (format[b] == symbol_type[i].type)
			{
				printf("%s", separator);
				symbol_type[i].print_function(argument);
				separator = ", ";
			}
			i++;
		}
		b++;
	}

	/* END */
	printf("\n");
	va_end(argument);
}
