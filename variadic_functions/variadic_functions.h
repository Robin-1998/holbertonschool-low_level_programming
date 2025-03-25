#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct choice - Structure qui contient les types d'arguments qui
 * seront passés dans la fonction 3-print_all.c
 * exemple
 * c : char
 * i : integer
 * f : float
 * s : char
 * @type: correspond au type de notre structure
 * @print_function : pointeur de fonction dans la structure qui permet
 * d'afficher notre bon argument en fonction de ce qui est retourner
 * dans le 3-main.c
 *
*/

typedef struct choice
{
	char type;
	void (*print_function)(va_list argument);
} choice;


#endif /* VARIADIC_FUNCTIONS_H */
