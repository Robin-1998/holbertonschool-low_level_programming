#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s : pointeur d'une chaine de caractère
 * @c : le caractère à rechercher dans la chaine
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	;
	if (s[i] == c)
		return (s + i);
		else
		return (0);
}

 /*
 * 1) boucle : elle a pour objectif de parcourir la chaine de s, à la
 * recherche du caractère c et ensuite quand elle y arrive elle incrémente
 * * jusqu'à la fin de la chaine de caractère
 * 2) après notre boucle, vérifie si c a été trouvé à l'aide du signe ==
 * si la condition est validé on retourne le pointeur s qui est l'adresse
 * du caractère trouvé dans la chaine et si rien n'est validé on retourne 0
 * 3 différence entre s[i] et s + i
 * s[i] donnera la valeur du caractère
 * s + i donnera l'adresse du caractère et dans ce cas il nous faut son
 * adresse et non ça va valeur car dans le main la valeur est déjà indiqué
 */
