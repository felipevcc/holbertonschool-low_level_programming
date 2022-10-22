#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: str pointer to pointer
 * @to: str pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
