#include<stdio.h>

/**
 * main - function qui affiche le nombre d'argument suivant le nom du
 * fichier transmis
 * @argc : Contiens le nombre d'argument
 * @argv : Contiens le tableau (caractère) des arguments de ligne de commande
 * du programme
 * Return: Always 0
 */

int main (int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return 0;
}
