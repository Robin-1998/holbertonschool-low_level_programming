#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - fonction main qui appelle différent fichier lorsque on utilise
 * nos argument pour notre calcul
 * @argc : Contiens le nombre d'argument
 * @argv : Contient les caractères des arguments qui ici sont utilisés
 * Return: Erreur suivant certaine condition
 */

int main(int argc, char *argv[])
{
	/* Partie 1 */
	int (*operateur)(int, int);
	int numero1 = atoi(argv[1]);
	int numero2 = atoi(argv[3]);
	int resultat;

	/* Partie 2 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Partie 3 */
	operateur = get_op_func(argv[2]);

	/* Partie 4 */
	if (operateur == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Partie 5*/
	if ((*argv[2] == '/' || *argv[2] == '%') && numero2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Partie 6 */
	resultat = operateur(numero1, numero2);
	printf("%d\n", resultat);
	return (0);
}

/*
 * // Partie 1 //
Tout d'abord on déclare notre pointeur de fonction qui va nous permettre
de stocker la variable operateur qui sera utiliser après.
ensuite on initialise notre numéro1 et numéro2 (des entiers) que l'on
transforme en charactère avec atoi et en leur indiquant au passage
qu'il s'agit de notre deuxième et quatirème argument.
On déclare ensuite notre résultat pour s'en servir après.
// Partie 2 //
Ensuite on ajoute une condition pour expliquer que si on est au dessus
de quatre argument on retourne une erreur avec une sortie 98
// Partie 3 //
On utilise notre variable pointeur dans notre fonction pointeur initialisé
au début pour lui dire que notre variable operateur "opération" est
égal à notre fonction du fichier 3-get_op_func.c et que c'est notre
troisème argument
// Partie 4 //
si notre variable operateur n'est pas l'un des opérateur on retourne
une erreur (donc si dans notre deuxième arguement qui est un opérateur de
calcul que nous avons bouclé dans un autre fichier est égal ne correspond
pas à ce qu'il doit afficher il retourne une erreur)
// Partie 5 //
On rajoute une autre condition que si pointeur du deuxième paramètre (donc
si notre pointeur stocker dans notre fonction pointeur) correspond à
/ ou % et 0 on retourne une erreur car l'on ne peut pas diviser un
nombre ou le faire modulo par 0.
// Partie 6 //
Et pour finir on initialise notre résultat en utilsant notre pointeur de
fonction. L'opérateur a déjà été plus ou moins initialisé mais lui on
ajoute les variables numéro1 et numéro2 pour qu'il effectue le lien
entre l'opérateur de calcul et nos deux nombres que l'on initialisera en
paramètre.
Après l'avoir correctement initalisé on affiche tout simplement notre
variable à l'aide d'un printf, pour que l'on puisse calculer dynamiquement
nos valeurs.
 */
