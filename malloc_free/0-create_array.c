#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function qui créé un tableay de caracttères et
 * l'itianlise avec un caractère spécifique
 * @size : Variable qui peut être uniquement posifif et
 * Contiens la taille du tableau
 * @c : Variable de type qui contient le caractère
 * Return: retourn Null si la taille est de 0
 */

char *create_array(unsigned int size, char c)
{
	char *add;
	unsigned int i;

	if (size == 0)
		return (NULL);
	add = malloc(sizeof(char) * size);

	if (add == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		add[i] = c;

	return (add);
}

/*
* On initialise notre pointeur de type char et une variable i utilie pour
notre futur boucle
On vérifie que notre variable de fonction (size) est bien égale à zéro
pour préciser au code que ce n'est pas à cette varaible que l'on veut
allouer de la mémoire.
Ensuite avec la commande malloc on alloue de la mémoire à notre pointeur
add en réservant autant de caractère suivant la taille (size)
Si l'allocation mémoire réussit, le pointeur add contient l'adresse de la
mémoire allouée. Et si l'allocation échoue, cela retournera NULL.
Dans la dernière partie de notre code, on boucle pour parcourir size.
Et à chaque itération on affecte la valeur de c à l'élément add[i], en résumé
chaque caractère du tableau sera initialisé avec la valeur de c.
et On termine en retournant add qui pointe vers le début du tableau de
caractères nouvellement alloué et initialisé
*/
