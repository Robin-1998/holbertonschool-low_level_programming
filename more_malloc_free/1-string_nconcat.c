#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Fonction qui concatène deux chaîne de caractère
 * @s1 : première chaine de caractère
 * @s2 : deuxième chaîne de caractère
 * @n : entier positif qui permet de contrôler combien de caractères
 * de la chaîne s2 seront ajoutés à la chaîne s1.
 * Return: retourn e un pointeur qui a la mémoire
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* PARTIE 1 */
	char *somme;
	unsigned int i, j, k;
	int lenght;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* PARTIE 2 */
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (lenght = 0; s2[lenght] != '\0'; lenght++)
	;
	for (j = 0; s2[j] != '\0' && j <= n ; j++)
	;

	/* PARTIE 3 */
	somme = malloc(sizeof(char) * (i + j + 1));
	if (somme == NULL)
		return (NULL);

	/* Partie 4 */
	for (k = 0; k < i; k++)
	{
		somme[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		somme[i + k] = s2[k];
	}
	/* Partie 5 */
	somme[i + j] = '\0';
	return (somme);
}

/*
* // PARTIE 1 //
On initialise notre pointeur pour qu'il stocke la concaténation des
deux chaîens de caractères.
On vérifie également que si NULL est passé sur s1 et s2 on le traite
comme un caractère vide.
// PARTIE 2 //
On initialise nos deux premières boucle pour calculer la longueur des deux
chaînes. Tant que le pointeur de s1 et celui de s2 n'arrive pas à la fin
du dernier caractère on incrémente (! = '\0')
mais entre deux, on calcule la longueur de s2 car on rajoute dans notre code
que si n inférieur à la longueur de s2, seule une partie de s2 est ajoutée
et si n est plus grand ou égal à la longueur de s2, alors toute la chaîne
s2 est ajoutée.
// PARTIE 3 //
Ensuite, on alloue de la mémoire pour stocker la nouvelle chaîne qui
contiendra la concaténation des deux chaînes s1 et s2.
la commande malloc allouera bien la mémoire pour i caractère de s1, j
caractères pour la chaîne s2, et + 1 pour le caractère supplémentaire
en fin de chaîne.
et après cela on dit que si l'allocation de mémoire échoue
alors notre pointeur, qui contient notre demande d'allocation
retourne NULL si c'est égale à NULL (une vérif)
// PARTIE 4 //
Les deux dernières boucles vont servir à copier les caractères des deux
pointeurs dans la nouvelle chaîne.
Dans la première boucle, on copie les caractères de 1 dans somme. La
variable k, encore non utilisé jusque là, servira d'indice pour cette chaine
dans la deuxième boucle, on copie les caractères de s2 dans somme
à partir de l'indice i (qui est la fin de la portion de s1 copiée).
L'indice k varie de 0 à j-1, ce qui correspond à la longueur de s2.
// Partie 5 //
Après avoir copié tous les caractères de 1 et s2 dans somme, on ajoute un
caractère nul à la fin de newp pour marque la fin de la nouvelle chaîne.
et on retourne somme qui contient la concaténation des châines s1 et s2.
*/
