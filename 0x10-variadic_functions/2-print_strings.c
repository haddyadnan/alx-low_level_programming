#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - func to print numbers with seperators
 * @separator: seperator to separate strings
 * @n: Number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *holder;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		holder = (va_arg(ap, char *));
		if (holder == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", holder);
			if ((separator != NULL) && (i < (n - 1)))
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
