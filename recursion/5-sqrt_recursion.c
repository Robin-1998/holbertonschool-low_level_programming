#include "main.h"

/**
* _sqrt_recursion - function qui retourne la racine carrée d'un nombre
* @n : varible qui stocke notre valeur
* Return: -1 si n est un nombre négatif.
*/


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recurs2(n, 1));
	}
}
/* Si notre valeur est un chiffre négatif on retourne -1 */

/**
* recurs2 - function qui vérifie si notre valeur est bien une racine carrée
* @na : varible qui stocke une pseudo valeur
* @carre : varible qui viendra appliquer la valeur d'une racine carré
* Return: carre si c'est une racine carré,-1 si ça ne l'est pas et notre
*/
int recurs2(int na, int carre)
{
	if (carre * carre == na)
	{
		return (carre);
	}
	if (carre * carre > na)
	{
		return (-1);
	}
	else
	{
		return (recurs2(na, carre + 1));
	}
}
/* si notre varible carre est na alors on retourn notre racine carré*/
/* qui est trouvé*/

/* si notre variable n'est pas égal à la racine carré alors on retourne*/
/* une erreur (return -1)*/

/*
* ensuite sinon on test les différentes valeurs successives variable de
carre pour voir si la racine carré est égal à la variable na ou si elle
ne l'est pas
*/
