#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints name
 *
 * @name: name
 * @f: function pointer
 * Return * void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
