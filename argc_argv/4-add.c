#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function qui additionne deux nombre positifs avec argc/argv
 * @argc : Contiens le nombre d'argument
 * @argv : Contient les caractères des arguments qui ici sont utilisés
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j, argument;
	int addition = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0' ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	argument = atoi(argv[i]);
	addition += argument;
	}
	printf("%d\n", addition);
	return (0);
}

/*
* Tout d'abord on dit que si aucun argument n'et passé alors on retourne 0
Ensuite on initialise une boucle imbriqué
Donc tant que i est bien le premier argument (i = 1) on parcours tout les
arguments à la suite.
Ensuite dans notre 2ème boucle que l'on imbrique, pour
chaque argument, on vérifie que tous les caractères sont des chiffres.
argv[i][j] fait référence au j-ème caractère de l'argument i.
Et dans cette boucle imbirqué on vérifie si chaque caractère est un chiffre
avec la fonction isdigit().
Si un caractère n'est pas un chiffre (!isdigit(argv[i][j])), on affiche
"Error" et on termine le programme en retournant 1, ce qui signifie
qu'il y a eu une erreur.
Ensuite notre variable argument est converti en entier et on ajoute cet
entier à la variable addition avec "addition += argument"
et pour finir on affcihe la somme de tout les arguments et return 0 pour
indiquer que le programme est terminé
*/
