#include "main.h"

/**
 * print_chessboard - fonction qui affiche les caractère du tableau
 * @a : pointeur qui appelera les deux index initier pour qu'on puisse
 * se "balader" dans le tableau.
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8 ; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar (a[i][j]);
		}
		_putchar ('\n');
	}
}

/*
* on déclare nos deux variables pour qu'ensuite dans les boucles on puisse
* se déplacer à la fois dans les lignes puis dans les colonnes.
* Dans nos deux boucles on va initialiser la valeur à 8 car les colonnes
* et lignes sont égales à 8.
* On peut donc traduire " tant que 0 est inférieur à 7 on incrémente" et
* avec putchar on lui dit d'afficher les lignes et les colonnes.
* ce qui nous fait par exemple si nous avions écrit que des 0:
* 00000000
* 00000000
* 00000000
* 00000000
* 00000000
* 00000000
* 00000000
* 00000000
*/
