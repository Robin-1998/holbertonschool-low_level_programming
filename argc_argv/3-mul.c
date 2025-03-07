#include<stdio.h>
#include <stdlib.h>

/**
 * main - function qui multiplie deux nombres
 * @argc : Contiens le nombre d'argument
 * @argv : Contient les caractères des arguments qui ici sont utilisés
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int argument_one;
	int argument_two;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	argument_one = atoi(argv[1]);
	argument_two = atoi(argv[2]);
	result = argument_one * argument_two;

	printf("%d\n", result);
	return (0);
}

/*
* Si notre argument est supérieur à 3 (si il est supérieur à trois
argument) alors on retourne la phrase erreur suivi d'un return (1)
A la fin de notre if, on transforme notre char en entier car on ne
pas multiplier un texte. Grace à la fonction atoi, on peut ainsi
transfromer notre char en entier. Ainsi on peut multiplier nos
deux arguments
et notre else viendra donc dire que si notre valeur de l'argument (argc)
est inférieur à 3
argument alors on affiche la mutliplication du 1er et du 2ème argument.
___A noter qu'il ne faut pas déclarer nos trois variables pour la partie
multplication au début de notre code car sinon notre première condition ne
fonctionnera pas
*/
