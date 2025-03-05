#include "main.h"

/**
 * _memset - affiche une chaine de caractère suivi d'une nouvelle ligne
 * @s : pointeur de la chaine de caractère
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
		return;
    }
	_putchar(*s);
	_puts_recursion(s + 1);
}

/*
 	cette Recursion permet d'afficher une chaine de caractère (comme si on
	utilisait un boucle)
	si notre pointeur de chaine de caractère est égal à notre caractère
	alors on saute à la ligne et on affiche donc notre pointeur en
	incrémentant
*/
