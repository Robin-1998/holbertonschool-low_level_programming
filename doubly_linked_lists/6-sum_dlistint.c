#include "lists.h"

/**
 * sum_dlistint - fonction qui retourne la somme de n dans la liste chaînée
 * dlistint_t
 * @head: pointeur du nombre d'entier
 * Return: on retourne la somme de n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

/*
* On intialise une variable int nommé sum à zéro pour qu'elle contienne
* la somme total de n.
* On boucle ensuite head pour parcourir notre liste châiné. Le code est court
* car on appelle d'autre fonction à la compilation :
*	- On appelle la 3-add_dnodeint_end.c qui permet d'ajouter un noeud
*	à la fin de la liste chaînée
*	- on appelle également 4-free_dlistint.c qui permet de libérer en
*	mémoire notre liste châiné
* compilation = gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89
* 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c
* --- Dans notre boucle on additionne tout ce qui est présent dans notre
* liste chaîné en prenant en compte n qui représente un entier.
* et on va de noeud en noeud pour bien faire la somme des entiers de chaque
* liste chaînée
* et on retourne donc la somme des listes chaînés
 */
