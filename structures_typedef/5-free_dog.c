#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - fonction qui va libérer la mémoire de l'élément de structure
 * @d: le pointeur de structure à libérer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}

/*
* On libère toute la mémoire allouer dynamiquement pour la structure dog_t
On vérifie si tous les pointeurs sont valides puis libère la mémoire des
champs name et owner si nécessaire, et enfin libère la structure elle-même.
Nous n'avons pas besoin de libérer la mémoire d'un float.
La gestion de mémoire pour ces variables est automatiquement gérée par
le compileur, et elles sont libérées à la fin de leur portée.
*/
