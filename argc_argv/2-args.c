#include<stdio.h>

/**
 * main - function qui affiche tout les arguments
 * @argc : Contiens le nombre d'argument
 * @argv : Contient les caractères des arguments qui ici sont utilisés
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
		return (0);
}
