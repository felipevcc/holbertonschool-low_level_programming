#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
