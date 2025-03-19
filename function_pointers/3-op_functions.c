#include "3-calc.h"

/**
 * op_add - Struct op addition
 * @a: Variable d'entier à additionner
 * @b: Variable d'entier à additionner
 * Return: Retourne la somme des deux paramètres de notre fonction
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Struct op division
 * @a: Variable d'entier à diviser
 * @b: Variable d'entier à diviser
 * Return: Retourne la division des deux paramètres de notre fonction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Struct op multiplication
 * @a: variable d'entier à multiplier
 * @b: variable d'entier à multiplier
 * Return: Retourne la multiplication des deux paramètres de notre fonction
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Struct op divison
 * @a: variable d'entier à diviser
 * @b: variable d'entier à diviser
 * Return: Retourne la division des deux paramètres de notre fonction
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Struct op modulo
 * @a: variable d'entier qui va servir à obtenir le reste d'une divison
 * @b: variable d'entier qui va servir à obtenir le reste d'une divison
 * Return: Retourne modulo des deux paramètres de notre fonction
 */

int op_mod(int a, int b)
{
	return (a % b);
}
