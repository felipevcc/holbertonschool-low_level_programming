#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

void print_string(va_list list)
{
	
	char *nil = va_arg(list, char *);

	if (nil == NULL)
		nil = "(nil)"; 
	/*printf("%s", nil);*/
	printf("hola");
}


/**
 * print_all - prints anything
 * @format: list of argument types
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j;
	char *separator = ", ";
	type_st types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	/*printf("Antes del while\n");*/
	while (format && format[i])
	{
		/*printf("Entro a while 1\n");*/
		j = 0;
		while (types[j].t)
		{
			/*printf("Entro a while 2\n");*/
			/*printf("format = %c\n", format[i]);*/
			/*printf("type = %s\n", types[j].t);*/
			if (format[i] == *types[j].t)
			{
				printf("%s", separator);
				types[i].f(args);	
			}
			j++;
		}
		i++;
	}	
	printf("\n");
	va_end(args);
}
