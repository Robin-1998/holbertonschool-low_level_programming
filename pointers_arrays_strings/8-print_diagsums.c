#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function qui imprime la sommes des deux diagonales
 * d'une matrice carré d'entiers.
 * @a : pointeur qui va permettre de stocker la somme de deux diagonales
 * Return: Always 0.
 * @size : correspond au ligne de notre matrice
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j;
	int three_diagonale = 0;
	int five_diagonale = 0;

	for (i = 0; i < size ; i++)
		three_diagonale += a[(i * size + i)];
	for (j = 0; j < size; j++)
		five_diagonale += a[(j * size) + (size - 1 - j)];

	printf("%d, ", three_diagonale);
	printf("%d\n", five_diagonale);
}

/*
* On déclare plusieurs variables. Une pour stocker les lignes et les
* colonnes (i et j) et deux autre pour stocker les deux diagnoales que l'on
* la première boucle permet d'aller dans le coin supérieur gauche au coin
inférieur droit d'une matrice carré
i * size donne l'index du début de la ligne i
i est l'indice de la colonne sur la diagonale principale
donc i * size + i donne l'indice exact de l'élément situé à la position
(i, i) dans la matrice
* la deuxième boucle, c'est la diagonale du coin supérieur droit au coin
inférieur gauche.
j * size va donner l'index du début de la ligne j comme pour la 1ère boucle
et on additionne l'indice de la colonne dans la diagonale inverse pour cette
ligne.
*/
