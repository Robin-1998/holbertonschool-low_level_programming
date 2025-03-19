#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - get_op_func est une fonction qui retourne un
 *pointeur vers une fonction
 * @s : Cette fonction prend en argument une chaîne de caracatère (s) qui
 * corrspondra à notre opérateur de calcul.
 * Return: Si il y a aucune correspondance avec notre caractère on retourne
 * NULL et à l'inverse si cela correspond cela retournera la fonction
 * op_add, qui est une fonction qui prend deux entiers.
 */

/*
*
Et pour finir la fonction retournée par get_op_func prend deux entiers
(int a et int b) en paramètres et renvoie un entier (int)
*/
int (*get_op_func(char *s))(int, int)
{
	/* Partie 0*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* Partie 1 */
	while (ops[i].op != NULL)
	{
		/* Partie 1.1 */
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	/* Partie 2 */
	return (NULL);
}

/*
* // Partie 0 //
Dans notre fonction on déclare un tableau ops. et ops_t ops est un tableau de
* structure op_t qui est présent dans nos calc.h
Le tableau ops[] associe chaque opérateur ("+", "-", "*", "/", "%") à
une fonction de calcul qui correspond à cet opérateur (op_add, op_sub, etc.).
Par exemple :
Le premier élément {"+", op_add} signifie que si l'opérateur est "+",
la fonction op_add sera appelée.
Le deuxième élément {"-", op_sub} signifie que si l'opérateur est "-",
la fonction op_sub sera appelée.
* si s ne correspond  à aucun des 5 opérateurs il faut retourner NULL. Donc
quand on sort de boucle pour énumérer tous les caractères si ce n'est pas
NULL la fonction retourna NULL.
// PARTIE 1 //
Donc en premier on boucle tous nos caractères, on rajoute .op qui permet
de récupére le pointeur *op en s'assurant que l'on ne parcourt pas les
éléments de notre tableau qui ne sont pas encore défini.
Dans notre boucle on ajoute une condition qui compare la chaîne ops[i].op
avec la chaîne s (l'opérateur passé à la fonction comme "+" ou "-"). Si les
deux chaînes sont identiques, strcmp retourne 0 (ça signifie qu'il a bien
trouve le bon opérateur)
Lorsque la correponsdance est trouvé on retourne (si strcmp est 0) nous
retournous la fonction associé à cet opérateur.
Par exemple,
Si l'opérateur est "+", cela retournera la fonction op_add, qui est
une fonction qui prend deux entiers et retourne leur somme.
i++ : Si aucune correspondance n'a été trouvée, on passe à
l'élément suivant du tableau ops[].
*/
