#include "main.h"
#include "2-strlen.c"
/**
 * rev_string  - function that prints a string, followed by a new line
 * @s : reverse
 * Return: Always 0.
 */

void rev_string(char *s)
{
int i;
char temp;
int longueur;

longueur = _strlen(s);

for (i = 0; i < longueur / 2; i++)
{
temp = s[i];
/*
 * On sauvegarde notre premier caractere
 * de la chaine dans la variable temporaire temp
 */
s[i] = s[longueur - i  - 1];
/*
 * on echange notre caractere de
 * la chaine depuis les deux
 * extremites vers le centre
 */
s[longueur - i - 1] = temp;
}
/*
 * on remplace le caractere
 * a la position symetrique par le
 * caractere que nous avons stock
 * dans temp au debut de literation
 * ce qui finalise l echange
 * Merci Gwendal
 */
}
