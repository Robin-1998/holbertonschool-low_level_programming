#ifndef DOG_H
#define DOG_H

/* Vérifie si DOG_H n'est pas déjà défini */
/* Définit DOG_H pour éviter l'inclusion multiple */

/**
 * struct dog - structure qui comprend 3 éléments
 * @name : élément nommé prénom
 * @age : élément nommé âge
 * @owner : élément nommé propriétaire
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
