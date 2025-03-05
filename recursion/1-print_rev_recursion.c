#include "main.h"

/**
 * _print_rev_recursion - affiche une chaine de caractère en inverse suivi
 * d'une nouvelle ligne
 * @s : pointeur de la chaine de caractère
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

/*
 * Dans ce code on récursive en utilisant une condition que si notre pointeur
à bien atteint la fin de la chaine donc on retourne simplement.
Le fait d'appeler _print_rev_recursion nous permet d'avancer dans la chaîne
de caractères (en passant aui suivant avec + 1). ça permet d'atteindre la fin
de la chaine avant de commencer à afficher les caractères en inverse.
*/
