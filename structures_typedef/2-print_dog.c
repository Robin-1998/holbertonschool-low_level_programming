#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Affiche la fonction structure print_dog
 * @d : pointeur qui permet de circuler dans tous les éléments de
 * notre structure.
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	/* PARTIE 1*/
	if (d == NULL)
	{
		return;
	}
	/* PARTIE 2 */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

/*
* Suivant l'exercice, nous faisons :
------ 1ère partie ---------
Si notre pointeur est Null alors on ne retoure rien
------ 2 ème partie --------
Si notre élément de d (name + age + owner) sont NULL ont affiche (le nom
de l'élément avec entre parenthèse le mot : nil)
et si notre élément de d est bien présent ont retourne notre texte avec la
valeur du pointeur de l'élément
exemple :
Name : Poppy
Age : 3.500000
Owner : bob
*/
