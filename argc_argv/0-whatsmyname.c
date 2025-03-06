#include<stdio.h>

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	  {
		printf("%s\n", argv[i]);
	  }
	  return (0);
}

/*
* Tant que notre variable initié à zéro est inférieurs au nombre d'argument
* alors on incrémente
ensuite on affiche l'entièrerté du programme via tableau donc ce qui
équivaut à donner une chaine de caractère
*/
