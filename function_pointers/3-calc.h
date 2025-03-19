#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/*
* Le fichier .h est un peu comme une base de donnée où toute nos fonctions
vont être stocker (en raccourci) pour être ensuite être appeller pour s'en
servir à nouveau. L'on pourrait tout condenser sur un seul dossier mais le
code serait trop gros et illisible
* Par exemple en premier on stock une structure
*/

#endif /* 3_CALC_H */
