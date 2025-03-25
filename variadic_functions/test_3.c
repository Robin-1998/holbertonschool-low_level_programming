#include <stdarg.h>
#include <stdio.h>

void print_caractere(va_list argument)
{
    printf("%c", va_arg(argument, int));
}

void print_entier(va_list argument)
{
    printf("%d", va_arg(argument, int));
}

void print_float_null(va_list argument)
{
    printf("%f", va_arg(argument, double));
}

void print_string(va_list argument)
{
    char *stringg = va_arg(argument, char*);
    if (stringg == NULL)
    {
        stringg = "(nil)";
    }
    printf("%s", stringg);
}

void print_all(const char * const format, ...)
{
    va_list argument;
    int b = 0;
    const char *separator = "";

    /* On démarre la liste d'arguments variadiques*/
    va_start(argument, format);

    /* Parcours de chaque caractère dans le format */
    while (format && format[b] != '\0')  /* tant qu'on n'a pas atteint la fin de la chaîne */
    {
        if (format[b] == 'c')  /* Si c'est un caractère */
        {
            printf("%s", separator);
            print_caractere(argument);
            separator = ", ";
        }
        else if (format[b] == 'i')  /* Si c'est un entier */
        {
            printf("%s", separator);
            print_entier(argument);
            separator = ", ";
        }
        else if (format[b] == 'f')  /* Si c'est un flottant */
        {
            printf("%s", separator);
            print_float_null(argument);
            separator = ", ";
        }
        else if (format[b] == 's')
        {
            printf("%s", separator);
            print_string(argument);
            separator = ", ";
        }
        b++;
    }
    printf("\n");
    va_end(argument);
}
