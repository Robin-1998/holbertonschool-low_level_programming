#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function qui concatène deux chaîne de caractères
 * @s1 : premier pointeur de chaîne à concaténé
 * @s2 : second pointeur de chaîne à concaténé
 * Return: retourne le premier pointeur concaténé
 */

char *str_concat(char *s1, char *s2)
{
	/* Partie 1 */
	char *newp;
	int i = 0, j = 0;
	int k;
	/* Partie 2 */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Partie 3 */
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	/* Partie 4 */
	newp = malloc(sizeof(char) * (i + j + 1));
	if (newp == NULL)
		return (NULL);
	/* Partie 5 */
	for (k = 0; k < i; k++)
	{
		newp[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		newp[i + k] = s2[k];
	}
	/* Partie 6 */
	newp[i + j] = '\0';
	return (newp);
}

/*
* Partie 1 - on initialise notre pointeur de type char et nos variables pour
les boucles futurs
  // Partie 2 //
si deux pointeurs dans le paramètre de notre function est NULL alors on le
traite comme une chaîne vide ("")
  // Partie 3 //
On initialise nos deux premières boucle pour calculer la longueur des deux
chaînes. Tant que le pointeur de s1 et celui de s2 n'arrive pas à la fin
du dernier caractère on incrémente (! = '\0')
  // Partie 4 //
Ensuite, on alloue de la mémoire pour stocker la nouvelle chaîne qui
contiendra la concaténation des deux chaînes s1 et s2.
la commande malloc allouera bien la mémoire pour i caractère de s1, j
caractères pour la chaîne s2, et + 1 pour le caractère supplémentaire
en fin de chaîne.
et après on dit que si l'allocation de mémoire échoue
alors newp, qui contient notre demande d'allocation retourne NULL si
c'est égale à NULL (une vérif)
  // Partie 5 //
Les deux dernières boucles vont servir à copier les caractères des deux
pointeurs dans la nouvelle chaîne.
Dans la première boucle, on copie les caractères de 1 dans newp. La
variable k, encore non utilisé jusque là, servira d'indice pour cette chaine
dans la deuxième boucle, on copie les caractères de s2 dans newp à partir de
l'indice i (qui est la fin de la portion de s1 copiée). L'indice k varie de
0 à j-1, ce qui correspond à la longueur de s2.
Exemple : si s2 = " World" et i = 5, la boucle va copier les caractères
un par un :
newp[5 + 0] = s2[0] → ' '
newp[5 + 1] = s2[1] → 'W'
newp[5 + 2] = s2[2] → 'o'
newp[5 + 3] = s2[3] → 'r'
newp[5 + 4] = s2[4] → 'l'
newp[5 + 5] = s2[5] → 'd'
  // Partie 6 //
Après avoir copié tous les caractères de 1 et s2 dans newp, on ajoute un
caractère nul à la fin de newp pour marque la fin de la nouvelle chaîne.
et on retourne newp qui contient la concaténation des châines s1 et s2.
*/
