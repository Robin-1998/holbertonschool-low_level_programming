#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - fonction qui affiche le prénom/nom
 * @name : pointeur d'un caractère qui contient le Nom
 * @f : pointeur vers une fonction qui prend un char* en paramètre et
 * qui retourne void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/*
* La ligne f(name) appelle une autre fonction ou f (pointeur en paramètre)
pointe et lui passe name comme argument.
Autrementt, dit f(name), appelle une fonction et lui passe la chaîne
de caractères name.
Donc vu que f pointe vers une fonction affiche le nom, alors elle affichera
le nom
*/
