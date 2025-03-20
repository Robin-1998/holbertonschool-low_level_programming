#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - fonction qui retourne la somme de tout les paramètres
 * @n: Est un paramètre de notre fonction qui représente le nombre
 * d'arguments supplémentaires passés à la fonction sum_them_all. Il
 * va définir combien de nombres vont êtres additionnés à l'intérieur
 * de la fonction.
 * Return: si n est égal à zéro alors on retourne 0. Et notre premier
 * return équivaut à retourner la somme de tous les paramètres.
 */

int sum_them_all(const unsigned int n, ...)
{
	/* Partie 1 */
	va_list arguments;
	unsigned int somme = 0;
	unsigned int i;

	/* Partie 2 */
	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		somme += va_arg(arguments, int);
	}
	va_end(arguments);
	return (somme);

	/* Partie 3 */
	if (n == 0)
	{
		return (0);
	}
}

/*
* // Partie 1 //
* On déclare tout d'abord dans notre fonction variadique la "commande"
va_list qui va permettre de créer une variable pour stocker notre nombre
variable d'argument.
ensuite on initialise notre variable d'entier positif à zéro pour calculer
la somme de nos arguments (demander dans l'exercice)
et on déclare une variable positif i pour l'utilisation d'une boucle for
// Partie 2 //
On commence à récupérer nos arguments de va_lists + de notre fonction.
On utilise une boucle pour incrémenter tous nos arguments et à l'intérieur
de cette boucle on récupère notre "variable d'argument" avec va_arg en
indiquant que si notre variable somme est égale à la somme de tous les
arguments on retourne la somme (en simple on fait la somme des arguments)
on libère ensuite via va_end notre variable d'argument et on retourne bien
la somme
// Partie 3 //
On rajoute une condition propre à l'exercice on l'on dit que si n est
supérieur à zéro on retourne alors zéro.
*/
