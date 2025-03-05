#include "main.h"

/**
 * factorial - fonction qui renvoie la factorielle d'un nombre donné
 * @n : variable qui stocke la valeur
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
/*
* Si  notre variable n est inférieur à 0 on retourne -1 pour afficher une
erreur comme il l'est demandé dans l'exercice
cependant si n est égal à 0, on return (1), comme il l'est demandé.
pour n * factorial(n -1) : cela multiplie n par la function factoriel de n-1
*/

