#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numberC;
	char numberL;

	for (numberC = 0; numberC < 10; numberC++)
		putchar(numberC + '0');
	for (numberL = 'a'; numberL <= 'f'; numberL++)
		putchar(numberL);
	putchar('\n');
return (0);
}
