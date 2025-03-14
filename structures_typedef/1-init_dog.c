#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - fonction qui intialise une variable de type struct dog.
 * @d : pointeur qui contient la structure.
 * @name : pointeur d'une chaine de caractère du prénom
 * @age : un pointeur flottant (chiffre à virgule) qui contient l'âge
 * @owner : un pointeur d'une chaine de caractère du propriétaire.
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Partie 1 */
	if (d == NULL)
		return;
	/* Partie 2*/
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

/*
* Dans ce code on définit notre fonction init_dog qui intialise dans
ses paramètres une variable de type struct dog, qui est une structure c
contenant des informations telle que le nom, l'âge et son propriétaire
* #include "dog.h., on stock notre prototype dans dog.h, pour qu'il soit
appelé dans notre main
// partie 1 //
Pour intialiser notre variable de ype struct dog, on vérifie que si le
pointeur d est égale NULL  (qu'il ne pointe pas vers une zone mémoire valide)
on ne retourne rien (on ne peut pas retourner zéro car la fonction
est un void)
// Partie 2 //
Et à l'inverse si notre pointeur de structure a été correctement alloué.
Le champ name de la structure est initialisé avec la valeur de name passé
en argument
Le champ age de la structure est initialisé avec la valeur
de age passée en argument.
Le champ owner de la structure est initialisé avec la valeur
de owner passée en argument.
------------- RESUME -------------
En résumé, l'utilisation du test if (d == NULL) permet de garantir qu'il n'y
aura pas d'accès illégal à la mémoire si l'utilisateur passe un pointeur
invalide à la fonction.
*/
