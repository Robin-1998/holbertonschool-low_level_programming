#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
		printf("%s: (nil)\n", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("%f: (nil)\n", d->age);
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("%s: (nil)\n", d->owner);
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
