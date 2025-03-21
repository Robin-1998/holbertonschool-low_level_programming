#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - fonction qui affiche une chaîne de caractère, suivi d'un
 * saut de ligne
 * @separator: paramètre de fonction qui correspond au caractère qui
 * sépare les nombre
 * @n: N est le nombre de chaîne de caractère passer dans la fonction
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* Partie 1 */
	va_list argument;
	unsigned int i;
	char *stringg;

	/* Partie 2 */
	if (separator == NULL)
	{
		separator = "";
	}
	/* Partie 3 */
	va_start(argument, n);
	for (i = 0; i < n; i++)
	{
		stringg = va_arg(argument, char *);
		if (stringg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", stringg);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	/* END */
	printf("\n");
	va_end(argument);
}

/*
 * // Partie 1 //
 * On déclare notre va_list, notre variable d'argument et notre variable
 * i qui va permettre de boucle ensuite nos argument
 * // Partie 2 //
 * Si notre pointeur de chaîne de caractère est NULL, on n'affiche rien
 * // Partie 3 //
 * On commence à itérer nos arguments avec va_list.
 * et on boucle pour défiler la liste de nos arguments (représenter par n)
 * on affiche en premier avec va_arg notre argument qui est un caractère.
 * Ensuite avec notre premier if dans notre boucle on dit que si un des
 * séparateur de la chaine de caractère est égal à 0 (null) on print "nil"
 * Dans notre deuxième condition si notre index est inférieurs à n (notre
 * dernier argument) - 1, en somme cela signifie que l'on ne peut aller
 * sur le denier argument avec le -1 pour éviter d'avoir un séparateur en
 * trop dans "Jay, Django"
 * // END //
 * à la sortie de notre boucle comme il l'est demander on fait un saut
 * de ligne et on libère notre argument (obligatoire lors d'une
 * fonction variadique)
 */
