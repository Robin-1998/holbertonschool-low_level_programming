#include<stdio.h>

/**
 * main - function qui affiche le nombre d'argument suivant le nom du
 * fichier transmis
 * @argc : Contiens le nombre d'argument
 * @argv : ai censé contenir le nombre de caractère mais vu qu'on n'utilise
 * pas cette variable, on fait un (void)
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
