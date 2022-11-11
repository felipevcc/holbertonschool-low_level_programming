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
	printf("%s", nil);
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
	char *separator = "";
	type_st types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};	

	va_start(args, format);

	while (format && format[i])
	{	
		j = 0;
		while (types[j].t)
		{
			if (format[i] == *types[j].t)
			{
				printf("%s", separator);
				types[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}	
	printf("\n");
	va_end(args);
}
